// CGM Lab Assignment 1 - Basic Graphics Primitives
// Uses FreeGLUT / OpenGL. Menu-driven program with switch-case.

#include <GL/freeglut.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int choice = 5; // Default: draw all four primitives

void drawLine() {
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
        glVertex2f(-80.0f, 55.0f);
        glVertex2f( 80.0f, 55.0f);
    glEnd();
}

void drawCircle() {
    glColor3f(0.0f, 0.7f, 0.0f);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; ++i) {
        float angle = i * 3.1415926f / 180.0f;
        glVertex2f(-45.0f + 25.0f * cos(angle),
                   5.0f + 25.0f * sin(angle));
    }
    glEnd();
}

void drawRectangle() {
    glColor3f(0.0f, 0.3f, 1.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(10.0f, -20.0f);
        glVertex2f(75.0f, -20.0f);
        glVertex2f(75.0f,  20.0f);
        glVertex2f(10.0f,  20.0f);
    glEnd();
}

void drawTriangle() {
    glColor3f(0.8f, 0.0f, 0.8f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-65.0f, -35.0f);
        glVertex2f(-15.0f, -35.0f);
        glVertex2f(-40.0f, -80.0f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.5f);

    // switch-case selects which primitive(s) to draw.
    switch (choice) {
        case 1: drawLine(); break;
        case 2: drawCircle(); break;
        case 3: drawRectangle(); break;
        case 4: drawTriangle(); break;
        case 5:
            drawLine();
            drawCircle();
            drawRectangle();
            drawTriangle();
            break;
        default: break;
    }

    glFlush();
}

int main(int argc, char** argv) {
    cout << "\n===== CGM LAB ASSIGNMENT 1 =====\n";
    cout << "BASIC GRAPHICS PRIMITIVES\n";
    cout << "1. Draw Straight Line\n";
    cout << "2. Draw Circle\n";
    cout << "3. Draw Rectangle\n";
    cout << "4. Draw Triangle\n";
    cout << "5. Draw All Shapes (Default assignment output)\n";
    cout << "Enter your choice: ";

    if (!(cin >> choice) || choice < 1 || choice > 5) {
        cout << "Invalid choice. Drawing all shapes.\n";
        choice = 5;
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 550);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("CGM Lab 1 - Basic Graphics Primitives");

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
