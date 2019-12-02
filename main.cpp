#include <Windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>

char title[] = "pyramid";
GLfloat anglePyramid = 0.0f;  // pemutaran sudut piramid
GLfloat angleCube = 0.0f;     // pemutaran sudut pangkat 3
double rotate_y=0, rotate_x=0;
int refreshMills = 15;        // jeda jarak waktu perdetik

void initGL() {
   glClearColor(255.0f, 255.0f, 255.0f, 1.0f); //warna latar belakang hitam dan buram
   glClearDepth(1.0f);                   // Mengatur kedalaman latar belakang
   glEnable(GL_DEPTH_TEST);   // Memungkinkan pengujian mendalam untuk pemilihan koordinat z
   glDepthFunc(GL_LEQUAL);    // Mengatur jenis kedalaman test
   glShadeModel(GL_SMOOTH);   // pemodelan bayangan dengan halus
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // koreksi perspektif yang bagus
}




void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // warna dan kedalaman buffer
   glMatrixMode(GL_MODELVIEW);     // Untuk beroperasi pada pemodelan matrix

   glLoadIdentity();                  // Ulang model pengelihatan model
   glTranslatef(0.0f, 0.0f, -6.0f);  // Bergerak ke kiri dan ke layar
   glRotatef(rotate_x, 1.0f, 0.0f, 0.0f);  // Memutar tentang (1,1,0) sumbu [NEW]
   glRotatef(rotate_y, 0.0f, 1.0f, 0.0f);



   glBegin(GL_POLYGON);
   // Alas
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-0.6f, -0.6f, 0.0f);
    glVertex3f(0.6f , -0.6f , 0.0f);
    glVertex3f(0.6f , -0.6f , -1.0f);
    glVertex3f(-0.6f, -0.6f, -1.0f);


   glEnd();   // selesai dari penggambaran piramid

       //garis lurus bawah
        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.5, -0.5, -0.037);
        glVertex3f(-0.5, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.5, -0.037);
        glVertex3f(-0.3, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.5, -0.037);
        glVertex3f(-0.1, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.5, -0.037);
        glVertex3f(0.1, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.5, -0.037);
        glVertex3f(0.3, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.5, -0.5, -0.037);
        glVertex3f(0.5, -0.6, 0.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.3, -0.12);
        glVertex3f(-0.3, -0.4, -0.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.3, -0.12);
        glVertex3f(-0.1, -0.4, -0.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.3, -0.12);
        glVertex3f(0.3, -0.4, -0.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.3, -0.12);
        glVertex3f(0.1, -0.4, -0.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.1, -0.2);
        glVertex3f(0.1, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.1, -0.2);
        glVertex3f(0.3, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.1, -0.2);
        glVertex3f(-0.3, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.1, -0.2);
        glVertex3f(-0.1, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.1, -0.2);
        glVertex3f(0.1, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.1, -0.2);
        glVertex3f(0.3, -0.2, -0.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, 0.1, -0.28);
        glVertex3f(-0.1, 0.0, -0.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, 0.1, -0.28);
        glVertex3f(0.1, 0.0, -0.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, 0.3, -0.36);
        glVertex3f(-0.1, 0.2, -0.32);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, 0.3, -0.36);
        glVertex3f(0.1, 0.2, -0.32);
        glEnd();

    //garis di depan
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.55, -0.5, -0.037);
    glVertex3f(0.55, -0.5, -0.037);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, -0.5, -0.037);
    glVertex3f(0.0, -0.4, -0.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, -0.5, -0.037);
    glVertex3f(-0.2, -0.4, -0.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.4, -0.5, -0.037);
    glVertex3f(-0.4, -0.4, -0.077);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, -0.5, -0.037);
    glVertex3f(0.2, -0.4, -0.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.4, -0.5, -0.037);
    glVertex3f(0.4, -0.4, -0.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.495, -0.4, -0.077);
    glVertex3f(0.495, -0.4, -0.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.445, -0.3, -0.12);
    glVertex3f(0.445, -0.3, -0.12);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.395, -0.2, -0.16);
    glVertex3f(0.395, -0.2, -0.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, -0.3, -0.12);
    glVertex3f(0.0, -0.2, -0.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, -0.3, -0.12);
    glVertex3f(-0.2, -0.2, -0.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, -0.3, -0.12);
    glVertex3f(0.2, -0.2, -0.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.345, -0.1, -0.2);
    glVertex3f(0.345, -0.1, -0.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.295, 0, -0.24);
    glVertex3f(0.295, 0, -0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, -0.1, -0.2);
    glVertex3f(0.0, 0, -0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, -0.1, -0.2);
    glVertex3f(-0.2, 0, -0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, -0.1, -0.2);
    glVertex3f(0.2, 0, -0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.245, 0.1, -0.28);
    glVertex3f(0.245, 0.1, -0.28);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.195, 0.2, -0.32);
    glVertex3f(0.195, 0.2, -0.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, 0.1, -0.28);
    glVertex3f(0.0, 0.2, -0.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, 0.1, -0.28);
    glVertex3f(-0.2, 0.2, -0.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, 0.1, -0.28);
    glVertex3f(0.2, 0.2, -0.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.145, 0.3, -0.36);
    glVertex3f(0.145, 0.3, -0.36);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.095, 0.4, -0.4);
    glVertex3f(0.095, 0.4, -0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, 0.3, -0.36);
    glVertex3f(0.0, 0.4, -0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.045, 0.5, -0.44);
    glVertex3f(0.045, 0.5, -0.44);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, 0.5, -0.44);
    glVertex3f(0.0, 0.6, -0.5);
    glEnd();

    //garis kiri
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.555, -0.5 , -0.05);
    glVertex3f(-0.555, -0.5 , -0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.505, -0.4, -0.1);
    glVertex3f(-0.505, -0.4, -0.9);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.555, -0.5, -0.5);
    glVertex3f(-0.505, -0.4, -0.5);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.555, -0.5, -0.7);
    glVertex3f(-0.505, -0.4, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.555, -0.5, -0.3);
    glVertex3f(-0.505, -0.4, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.455, -0.3, -0.12);
    glVertex3f(-0.455, -0.3, -0.88);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.405, -0.2, -0.15);
    glVertex3f(-0.405, -0.2, -0.85);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.455, -0.3, -0.5);
    glVertex3f(-0.405, -0.2, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.455, -0.3, -0.7);
    glVertex3f(-0.405, -0.2, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.455, -0.3, -0.3);
    glVertex3f(-0.405, -0.2, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.355, -0.1, -0.2);
    glVertex3f(-0.355, -0.1, -0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.305, 0, -0.25);
    glVertex3f(-0.305, 0, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.355, -0.1, -0.5);
    glVertex3f(-0.305, 0, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.355, -0.1, -0.7);
    glVertex3f(-0.305, 0, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.355, -0.1, -0.3);
    glVertex3f(-0.305, 0, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.255, 0.1, -0.3);
    glVertex3f(-0.255, 0.1, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.205, 0.2, -0.34);
    glVertex3f(-0.205, 0.2, -0.66);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.255, 0.1, -0.5);
    glVertex3f(-0.205, 0.2, -0.5);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.155, 0.3, -0.38);
    glVertex3f(-0.155, 0.3, -0.62);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.105, 0.4, -0.41);
    glVertex3f(-0.105, 0.4, -0.59);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.155, 0.3, -0.5);
    glVertex3f(-0.105, 0.4, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.055, 0.5, -0.55);
    glVertex3f(-0.055, 0.5, -0.45);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.055, 0.5, -0.5);
    glVertex3f(-0.0, 0.6, -0.5);
    glEnd();


    //garis di kanan

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.555, -0.5 , -0.05);
    glVertex3f(0.555, -0.5 , -0.95);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.505, -0.4, -0.1);
    glVertex3f(0.505, -0.4, -0.9);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.555, -0.5, -0.5);
    glVertex3f(0.505, -0.4, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.555, -0.5, -0.7);
    glVertex3f(0.505, -0.4, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.555, -0.5, -0.3);
    glVertex3f(0.505, -0.4, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.455, -0.3, -0.12);
    glVertex3f(0.455, -0.3, -0.88);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.405, -0.2, -0.15);
    glVertex3f(0.405, -0.2, -0.85);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.455, -0.3, -0.5);
    glVertex3f(0.405, -0.2, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.455, -0.3, -0.7);
    glVertex3f(0.405, -0.2, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.455, -0.3, -0.3);
    glVertex3f(0.405, -0.2, -0.3);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.355, -0.1, -0.2);
    glVertex3f(0.355, -0.1, -0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.305, 0, -0.25);
    glVertex3f(0.305, 0, -0.75);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.355, -0.1, -0.5);
    glVertex3f(0.305, 0, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.355, -0.1, -0.7);
    glVertex3f(0.305, 0, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.355, -0.1, -0.3);
    glVertex3f(0.305, 0, -0.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.255, 0.1, -0.3);
    glVertex3f(0.255, 0.1, -0.7);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.205, 0.2, -0.34);
    glVertex3f(0.205, 0.2, -0.66);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.255, 0.1, -0.5);
    glVertex3f(0.205, 0.2, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.155, 0.3, -0.38);
    glVertex3f(0.155, 0.3, -0.62);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.105, 0.4, -0.41);
    glVertex3f(0.105, 0.4, -0.59);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.155, 0.3, -0.5);
    glVertex3f(0.105, 0.4, -0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.055, 0.5, -0.55);
    glVertex3f(0.055, 0.5, -0.45);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.055, 0.5, -0.5);
    glVertex3f(0.0, 0.6, -0.5);
    glEnd();

    //garis di belakang
    //garis lurus bawah belakang
        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.5, -0.5, -0.963);
        glVertex3f(-0.5, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.5, -0.963);
        glVertex3f(-0.3, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.5, -0.963);
        glVertex3f(-0.1, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.5, -0.963);
        glVertex3f(0.1, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.5, -0.963);
        glVertex3f(0.3, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.5, -0.5, -0.963);
        glVertex3f(0.5, -0.6, -1.005);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.3, -0.88);
        glVertex3f(-0.3, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.3, -0.88);
        glVertex3f(-0.1, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.3, -0.88);
        glVertex3f(-0.3, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.3, -0.88);
        glVertex3f(-0.1, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.3, -0.88);
        glVertex3f(0.1, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.3, -0.88);
        glVertex3f(0.3, -0.4, -0.923);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.1, -0.8);
        glVertex3f(0.1, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.1, -0.8);
        glVertex3f(0.3, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.3, -0.1, -0.8);
        glVertex3f(-0.3, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, -0.1, -0.8);
        glVertex3f(-0.1, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, -0.1, -0.8);
        glVertex3f(0.1, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.3, -0.1, -0.8);
        glVertex3f(0.3, -0.2, -0.84);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, 0.1, -0.72);
        glVertex3f(-0.1, 0.0, -0.76);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, 0.1, -0.72);
        glVertex3f(0.1, 0.0, -0.76);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-0.1, 0.3, -0.64);
        glVertex3f(-0.1, 0.2, -0.68);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(0.1, 0.3, -0.64);
        glVertex3f(0.1, 0.2, -0.68);
        glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.55, -0.5, -0.963);
    glVertex3f(0.55, -0.5, -0.963);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.495, -0.4, -0.923);
    glVertex3f(0.495, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, -0.5, -0.963);
    glVertex3f(0.0, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, -0.5, -0.963);
    glVertex3f(0.2, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.4, -0.5, -0.963);
    glVertex3f(0.4, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, -0.5, -0.963);
    glVertex3f(-0.2, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.4, -0.5, -0.963);
    glVertex3f(-0.4, -0.4, -0.923);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.440, -0.3, -0.883);
    glVertex3f(0.440, -0.3, -0.883);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.385, -0.2, -0.843);
    glVertex3f(0.385, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, -0.3, -0.883);
    glVertex3f(0.0, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, -0.3, -0.883);
    glVertex3f(0.2, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.4, -0.3, -0.883);
    glVertex3f(0.4, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, -0.3, -0.883);
    glVertex3f(-0.2, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.4, -0.3, -0.883);
    glVertex3f(-0.4, -0.2, -0.843);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.33, -0.1, -0.803);
    glVertex3f(0.33, -0.1, -0.803);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.275, 0, -0.763);
    glVertex3f(0.275, 0, -0.763);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.22, 0.1, -0.723);
    glVertex3f(0.22, 0.1, -0.723);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0, 0, -0.763);
    glVertex3f(0, -0.1, -0.803);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, 0, -0.763);
    glVertex3f(-0.2, -0.1, -0.803);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, 0, -0.763);
    glVertex3f(0.2, -0.1, -0.803);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.165, 0.2, -0.683);
    glVertex3f(0.165, 0.2, -0.683);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.11, 0.3, -0.643);
    glVertex3f(0.11, 0.3, -0.643);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0, 0.1, -0.723);
    glVertex3f(0, 0.2, -0.683);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.2, 0.1, -0.723);
    glVertex3f(0.2, 0.2, -0.683);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.2, 0.1, -0.723);
    glVertex3f(-0.2, 0.2, -0.683);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0, 0.3, -0.643);
    glVertex3f(0, 0.4, -0.603);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.1, 0.4, -0.603);
    glVertex3f(0.1, 0.4, -0.603);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.05, 0.5, -0.553);
    glVertex3f(0.05, 0.5, -0.553);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.0, 0.5, -0.553);
    glVertex3f(0.0, 0.6, -0.5);
    glEnd();

//garis piramid kiri



    //kaktus
    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.1, 0.0, 0.0);
    glVertex3f(1.1, -0.6, 0.0);
    glVertex3f(1.0, -0.6, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(1.033, 0.05, 0.0);
    glVertex3f(1.067, 0.05, 0.0);
    glVertex3f(1.1, 0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(1.0, -0.4, 0.0);
    glVertex3f(0.9, -0.35, 0.0);
    glVertex3f(0.9, -0.1, 0.0);
    glVertex3f(0.95, -0.1, 0.0);
    glVertex3f(0.95, -0.25, 0.0);
    glVertex3f(1.0, -0.3, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0.9, -0.1, 0.0);
    glVertex3f(0.9166, -0.095, 0.0);
    glVertex3f(0.9333, -0.095, 0.0);
    glVertex3f(0.95, -0.1, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(1.1, -0.45, 0.0);
    glVertex3f(1.2, -0.4, 0.0);
    glVertex3f(1.2, -0.15, 0.0);
    glVertex3f(1.15, -0.15, 0.0);
    glVertex3f(1.15, -0.3, 0.0);
    glVertex3f(1.1, -0.35, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(1.15, -0.15, 0.0);
    glVertex3f(1.1666, -0.145, 0.0);
    glVertex3f(1.1833, -0.145, 0.0);
    glVertex3f(1.2, -0.15, 0.0);
    glEnd();

    //kaktus
    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.1, 0.0, 0.0);
    glVertex3f(-1.1, -0.6, 0.0);
    glVertex3f(-1.0, -0.6, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(-1.033, 0.05, 0.0);
    glVertex3f(-1.067, 0.05, 0.0);
    glVertex3f(-1.1, 0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.0, -0.4, 0.0);
    glVertex3f(-0.9, -0.35, 0.0);
    glVertex3f(-0.9, -0.1, 0.0);
    glVertex3f(-0.95, -0.1, 0.0);
    glVertex3f(-0.95, -0.25, 0.0);
    glVertex3f(-1.0, -0.3, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-0.9, -0.1, 0.0);
    glVertex3f(-0.9166, -0.095, 0.0);
    glVertex3f(-0.9333, -0.095, 0.0);
    glVertex3f(-0.95, -0.1, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.1, -0.45, 0.0);
    glVertex3f(-1.2, -0.4, 0.0);
    glVertex3f(-1.2, -0.15, 0.0);
    glVertex3f(-1.15, -0.15, 0.0);
    glVertex3f(-1.15, -0.3, 0.0);
    glVertex3f(-1.1, -0.35, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.15, -0.15, 0.0);
    glVertex3f(-1.1666, -0.145, 0.0);
    glVertex3f(-1.1833, -0.145, 0.0);
    glVertex3f(-1.2, -0.15, 0.0);
    glEnd();

    //kaktus
    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0, 0.0, 0.5);
    glVertex3f(0.1, 0.0, 0.5);
    glVertex3f(0.1, -0.6, 0.5);
    glVertex3f(0, -0.6, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0, 0.0, 0.5);
    glVertex3f(0.033, 0.05, 0.5);
    glVertex3f(0.067, 0.05, 0.5);
    glVertex3f(0.1, 0.0, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0, -0.4, 0.5);
    glVertex3f(-0.1, -0.35, 0.5);
    glVertex3f(-0.1, -0.1, 0.5);
    glVertex3f(-0.05, -0.1, 0.5);
    glVertex3f(-0.05, -0.25, 0.5);
    glVertex3f(0, -0.3, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-0.1, -0.1, 0.5);
    glVertex3f(-0.0834, -0.095, 0.5);
    glVertex3f(-0.0667, -0.095, 0.5);
    glVertex3f(-0.05, -0.1, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0.1, -0.45, 0.5);
    glVertex3f(0.2, -0.4, 0.5);
    glVertex3f(0.2, -0.15, 0.5);
    glVertex3f(0.15, -0.15, 0.5);
    glVertex3f(0.15, -0.3, 0.5);
    glVertex3f(0.1, -0.35, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(0.15, -0.15, 0.5);
    glVertex3f(0.1666, -0.145, 0.5);
    glVertex3f(0.1833, -0.145, 0.5);
    glVertex3f(0.2, -0.15, 0.5);
    glEnd();

    //kaktus
    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.5, 0.0, 0.0);
    glVertex3f(-1.6, 0.0, 0.0);
    glVertex3f(-1.6, -0.6, 0.0);
    glVertex3f(-1.5, -0.6, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.5, 0.0, 0.0);
    glVertex3f(-1.533, 0.05, 0.0);
    glVertex3f(-1.567, 0.05, 0.0);
    glVertex3f(-1.6, 0.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.5, -0.4, 0.0);
    glVertex3f(-1.4, -0.35, 0.0);
    glVertex3f(-1.4, -0.1, 0.0);
    glVertex3f(-1.45, -0.1, 0.0);
    glVertex3f(-1.45, -0.25, 0.0);
    glVertex3f(-1.5, -0.3, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.4, -0.1, 0.0);
    glVertex3f(-1.4166, -0.095, 0.0);
    glVertex3f(-1.4333, -0.095, 0.0);
    glVertex3f(-1.45, -0.1, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.6, -0.45, 0.0);
    glVertex3f(-1.7, -0.4, 0.0);
    glVertex3f(-1.7, -0.15, 0.0);
    glVertex3f(-1.65, -0.15, 0.0);
    glVertex3f(-1.65, -0.3, 0.0);
    glVertex3f(-1.6, -0.35, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(39, 179, 53);
    glVertex3f(-1.65, -0.15, 0.0);
    glVertex3f(-1.6666, -0.145, 0.0);
    glVertex3f(-1.6833, -0.145, 0.0);
    glVertex3f(-1.7, -0.15, 0.0);
    glEnd();


   glBegin(GL_TRIANGLES);           // Mulailah menggambar piramida dengan 4 segitiga
      // Front
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-0.6 , -0.6 , 0.0);
    glVertex3f(0.6 , -0.6 , 0.0);
    glVertex3f(0.0, 0.6 , -0.5);


      // Right
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(0.6, -0.6 , 0.0);
    glVertex3f(0.6, -0.6 , -1.0);
    glVertex3f(0.0, 0.6 , -0.5);

      // Back
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-0.6 , -0.6, -1.0);
    glVertex3f(0.6 , -0.6 , -1.0);
    glVertex3f(0.0 , 0.6 , -0.5);

      // Left
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-0.6 , -0.6 , 0.0);
    glVertex3f(-0.6, -0.6 , -1.0);
    glVertex3f(0.0, 0.6 , -0.5);

    glEnd();   // Selesai menggambar piramida

    //piramid 2 kiri
    glBegin(GL_TRIANGLES);           // Mulailah menggambar piramida dengan 4 segitiga
      // Front
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-2.1 , -0.6 , -1.0);
    glVertex3f(-0.9 , -0.6 , -1.0);
    glVertex3f(-1.5, 0.6 , -1.5);
      // Right
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-0.9, -0.6 , -1.0);
    glVertex3f(-0.9, -0.6 , -2.0);
    glVertex3f(-1.5, 0.6 , -1.5);

      // Back
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-2.1 , -0.6, -2.0);
    glVertex3f(-0.9 , -0.6 , -2.0);
    glVertex3f(-1.5 , 0.6 , -1.5);

      // Left
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(-2.1 , -0.6 , -1.0);
    glVertex3f(-2.1, -0.6 , -2.0);
    glVertex3f(-1.5, 0.6 , -1.5);

    glEnd();   // Selesai menggambar piramida

    //garis lurus bawah
        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-2, -0.5, -1.037);
        glVertex3f(-2, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.8, -0.5, -1.037);
        glVertex3f(-1.8, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.6, -0.5, -1.037);
        glVertex3f(-1.6, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, -0.5, -1.037);
        glVertex3f(-1.4, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.2, -0.5, -1.037);
        glVertex3f(-1.2, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.0, -0.5, -1.037);
        glVertex3f(-1.0, -0.6, -0.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.8, -0.3, -1.12);
        glVertex3f(-1.8, -0.4, -1.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.6, -0.3, -1.12);
        glVertex3f(-1.6, -0.4, -1.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.2, -0.3, -1.12);
        glVertex3f(-1.2, -0.4, -1.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, -0.3, -1.12);
        glVertex3f(-1.4, -0.4, -1.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, -0.1, -1.2);
        glVertex3f(-1.4, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.2, -0.1, -1.2);
        glVertex3f(-1.2, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.8, -0.1, -1.2);
        glVertex3f(-1.8, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.6, -0.1, -1.2);
        glVertex3f(-1.6, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, -0.1, -1.2);
        glVertex3f(-1.4, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.2, -0.1, -1.2);
        glVertex3f(-1.2, -0.2, -1.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.6, 0.1, -1.28);
        glVertex3f(-1.6, 0.0, -1.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, 0.1, -1.28);
        glVertex3f(-1.4, 0.0, -1.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.6, 0.3, -1.36);
        glVertex3f(-1.6, 0.2, -1.32);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(-1.4, 0.3, -1.36);
        glVertex3f(-1.4, 0.2, -1.32);
        glEnd();

    //garis di depan
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-2.05, -0.5, -1.037);
    glVertex3f(-0.95, -0.5, -1.037);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, -0.5, -1.037);
    glVertex3f(-1.5, -0.4, -1.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.7, -0.5, -1.037);
    glVertex3f(-1.7, -0.4, -1.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.9, -0.5, -1.037);
    glVertex3f(-1.9, -0.4, -1.077);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.3, -0.5, -1.037);
    glVertex3f(-1.3, -0.4, -1.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.1, -0.5, -1.037);
    glVertex3f(-1.1, -0.4, -1.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.995, -0.4, -1.077);
    glVertex3f(-1.005, -0.4, -1.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.945, -0.3, -1.12);
    glVertex3f(-1.055, -0.3, -1.12);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.895, -0.2, -1.16);
    glVertex3f(-1.105, -0.2, -1.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, -0.3, -1.12);
    glVertex3f(-1.5, -0.2, -1.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.7, -0.3, -1.12);
    glVertex3f(-1.7, -0.2, -1.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.3, -0.3, -1.12);
    glVertex3f(-1.3, -0.2, -1.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.845, -0.1, -1.2);
    glVertex3f(-1.155, -0.1, -1.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.795, 0, -1.24);
    glVertex3f(-1.205, 0, -1.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, -0.1, -1.2);
    glVertex3f(-1.5, 0, -1.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.7, -0.1, -1.2);
    glVertex3f(-1.7, 0, -1.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.3, -0.1, -1.2);
    glVertex3f(-1.3, 0, -1.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.745, 0.1, -1.28);
    glVertex3f(-1.255, 0.1, -1.28);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.695, 0.2, -1.32);
    glVertex3f(-1.305, 0.2, -1.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, 0.1, -1.28);
    glVertex3f(-1.5, 0.2, -1.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.7, 0.1, -1.28);
    glVertex3f(-1.7, 0.2, -1.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.3, 0.1, -1.28);
    glVertex3f(-1.3, 0.2, -1.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.645, 0.3, -1.36);
    glVertex3f(-1.355, 0.3, -1.36);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.595, 0.4, -1.4);
    glVertex3f(-1.405, 0.4, -1.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, 0.3, -1.36);
    glVertex3f(-1.5, 0.4, -1.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.545, 0.5, -1.44);
    glVertex3f(-1.455, 0.5, -1.44);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(-1.5, 0.5, -1.44);
    glVertex3f(-1.5, 0.6, -1.5);
    glEnd();


    //piramid 3 kanan

    glBegin(GL_TRIANGLES);           // Mulailah menggambar piramida dengan 4 segitiga
      // Front
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(0.9 , -0.6 , -3.0);
    glVertex3f(2.1 , -0.6 , -3.0);
    glVertex3f(1.5, 0.6 , -3.5);
      // Right
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(2.1, -0.6 , -3.0);
    glVertex3f(2.1, -0.6 , -4.0);
    glVertex3f(1.5, 0.6 , -3.5);

      // Back
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(0.9 , -0.6, -4.0);
    glVertex3f(2.1 , -0.6 , -4.0);
    glVertex3f(1.5 , 0.6 , -3.5);

      // Left
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    //glRotatef(rotate_x, 1.0f, 1.0f, 0.0f);
    glVertex3f(0.9 , -0.6 , -3.0);
    glVertex3f(0.9, -0.6 , -4.0);
    glVertex3f(1.5, 0.6 , -3.5);

    glEnd();   // Selesai menggambar piramida

    //garis lurus bawah
        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.0, -0.5, -3.037);
        glVertex3f(1.0, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.2, -0.5, -3.037);
        glVertex3f(1.2, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.4, -0.5, -3.037);
        glVertex3f(1.4, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, -0.5, -3.037);
        glVertex3f(1.6, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, -0.5, -3.037);
        glVertex3f(1.6, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(2.0, -0.5, -3.037);
        glVertex3f(2.0, -0.6, -2.995);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.2, -0.3, -3.12);
        glVertex3f(1.2, -0.4, -3.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.4, -0.3, -3.12);
        glVertex3f(1.4, -0.4, -3.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.7, -0.3, -3.12);
        glVertex3f(1.7, -0.4, -3.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, -0.3, -3.12);
        glVertex3f(1.6, -0.4, -3.077);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, -0.1, -3.2);
        glVertex3f(1.6, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.8, -0.1, -3.2);
        glVertex3f(1.8, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.8, -0.1, -3.2);
        glVertex3f(1.8, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.4, -0.1, -3.2);
        glVertex3f(1.4, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, -0.1, -3.2);
        glVertex3f(1.6, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.8, -0.1, -3.2);
        glVertex3f(1.8, -0.2, -3.16);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.4, 0.1, -3.28);
        glVertex3f(1.4, 0.0, -3.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, 0.1, -3.28);
        glVertex3f(1.6, 0.0, -3.24);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.4, 0.3, -3.36);
        glVertex3f(1.4, 0.2, -3.32);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 0);
        glVertex3f(1.6, 0.3, -3.36);
        glVertex3f(1.6, 0.2, -3.32);
        glEnd();

    //garis di depan
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(0.95, -0.5, -3.037);
    glVertex3f(2.05, -0.5, -3.037);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, -0.5, -3.037);
    glVertex3f(1.5, -0.4, -3.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.3, -0.5, -3.037);
    glVertex3f(1.3, -0.4, -3.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.1, -0.5, -3.037);
    glVertex3f(1.1, -0.4, -3.077);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.7, -0.5, -3.037);
    glVertex3f(1.7, -0.4, -3.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.9, -0.5, -3.037);
    glVertex3f(1.9, -0.4, -3.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.005, -0.4, -3.077);
    glVertex3f(1.995, -0.4, -3.077);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.055, -0.3, -3.12);
    glVertex3f(1.945, -0.3, -3.12);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.105, -0.2, -3.16);
    glVertex3f(1.895, -0.2, -3.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, -0.3, -3.12);
    glVertex3f(1.5, -0.2, -3.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.3, -0.3, -3.12);
    glVertex3f(1.3, -0.2, -3.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.7, -0.3, -3.12);
    glVertex3f(1.7, -0.2, -3.16);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.155, -0.1, -3.2);
    glVertex3f(1.845, -0.1, -3.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.205, 0, -3.24);
    glVertex3f(1.795, 0, -3.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, -0.1, -3.2);
    glVertex3f(1.5, 0, -3.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.3, -0.1, -3.2);
    glVertex3f(1.3, 0, -3.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.7, -0.1, -3.2);
    glVertex3f(1.7, 0, -3.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.255, 0.1, -3.28);
    glVertex3f(1.745, 0.1, -3.28);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.305, 0.2, -3.32);
    glVertex3f(1.695, 0.2, -3.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, 0.1, -3.28);
    glVertex3f(1.5, 0.2, -3.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.3, 0.1, -3.28);
    glVertex3f(1.3, 0.2, -3.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.7, 0.1, -3.28);
    glVertex3f(1.7, 0.2, -3.32);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.355, 0.3, -3.36);
    glVertex3f(1.645, 0.3, -3.36);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.405, 0.4, -3.4);
    glVertex3f(1.595, 0.4, -3.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, 0.3, -3.36);
    glVertex3f(1.5, 0.4, -3.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.455, 0.5, -3.44);
    glVertex3f(1.545, 0.5, -3.44);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex3f(1.5, 0.5, -3.44);
    glVertex3f(1.5, 0.6, -3.5);
    glEnd();

    glTranslatef (-1.0, 0.9, 0.5);
    glColor3ub(235, 198, 52);
    glutWireSphere(0.2,100,50);

    glFlush();
   glutSwapBuffers();  // Swap buffer bingkai depan dan belakang (double buffer)
   anglePyramid +=2.2f;
   angleCube -= 0.2f;

}


void specialKeys(int key, int x, int y){
    if(key == GLUT_KEY_RIGHT){
        rotate_y += 2.05;
    }

    else if (key == GLUT_KEY_LEFT){
        rotate_y -= 2.05;
    }

    else if(key == GLUT_KEY_UP){
        rotate_x += 2.05;
    }

    else if (key == GLUT_KEY_DOWN){
        rotate_x -= 2.05;
    }
}


void timer(int value) {
   glutPostRedisplay();      // permintaan repaint posting untuk mengaktifkan display ()
   glutTimerFunc(refreshMills, timer, 1); // berikutnya waktu panggilan milidetik
};

void reshape(GLsizei width, GLsizei height) {  // GLsizei untuk integer non-negatif

   if (height == 0) height = 1;                // Untuk mencegah dibagi dengan 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;


   glViewport(0, 0, width, height);
   glMatrixMode(GL_PROJECTION);  // Untuk beroperasi pada matriks Proyeksi
   glLoadIdentity();             // ulang
   gluPerspective(40.0f, aspect, 0.1f, 100.0f);
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);            // menginisialisasi GLUT
   glutInitDisplayMode(GLUT_DOUBLE); // Aktifkan mode buffered ganda
   glutInitWindowSize(1000, 1000);   // Mengatur jendela lebar awal & tinggi
   glutInitWindowPosition(100, 100); // Posisi jendela awal pojok kiri
   glutCreateWindow(title);          // Buat jendela dengan judul yang diberikan
   glutDisplayFunc(display);       // Menampilkan fungsi
   glutReshapeFunc(reshape);       // membentuk kembali jendela
   glutSpecialFunc(specialKeys);
   initGL();                       // inisialisasi OpenGL kita sendiri
   glutTimerFunc(0, timer, 0);     // timer panggilan langsung [NEW]
   glClearColor(0,0,0,0);
    glutMainLoop();    // proses pengulangan

   return 0;
}
