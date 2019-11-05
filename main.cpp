#include <Windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>



char title[] = "pyramid";
GLfloat anglePyramid = 0.0f;  // pemutaran sudut piramid
GLfloat angleCube = 0.0f;     // pemutaran sudut pangkat 3
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
   glRotatef(anglePyramid, 1.0f, 1.0f, 0.0f);  // Memutar tentang (1,1,0) sumbu [NEW]

   glBegin(GL_POLYGON);
   // Alas
     glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex3f(-0.6f, -0.6f, 0.0f);
    glVertex3f(0.6f, -0.6f, 0.0f);
    glVertex3f(0.6f, -0.6f, -1.0f);
    glVertex3f(-0.6f, -0.6f, -1.0f);


   glEnd();   // selesai dari penggambaran piramid


   glBegin(GL_TRIANGLES);           // Mulailah menggambar piramida dengan 4 segitiga
      // Front
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    glVertex3f(-0.6, -0.6, 0.0);
    glVertex3f(0.6, -0.6, 0.0);
    glVertex3f(0.0, 0.6, -0.5);
      // Right
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    glVertex3f(0.6, -0.6, 0.0);
    glVertex3f(0.6, -0.6, -1.0);
    glVertex3f(0.0, 0.6, -0.5);

      // Back
      glBegin(GL_POLYGON);
    glColor3ub(150, 75, 0);
    glVertex3f(-0.6, -0.6, -1.0);
    glVertex3f(0.6, -0.6, -1.0);
    glVertex3f(0.0, 0.6, -0.5);

      // Left
      glBegin(GL_POLYGON);
    glColor3ub(235, 198, 52);
    glVertex3f(-0.6, -0.6, 0.0);
    glVertex3f(-0.6, -0.6, -1.0);
    glVertex3f(0.0, 0.6, -0.5);



   glEnd();   // Selesai menggambar piramida

    glTranslatef (-1.0, 0.8, 0.5);
    glutWireSphere(0.2,100,50);
    glFlush();
   glutSwapBuffers();  // Swap buffer bingkai depan dan belakang (double buffer)
   anglePyramid += 2.2f;
   angleCube -= 0.2f;

}




void timer(int value) {
   glutPostRedisplay();      // permintaan repaint posting untuk mengaktifkan display ()
   glutTimerFunc(refreshMills, timer, 1); // berikutnya waktu panggilan milidetik
}

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
   glutInitWindowSize(480, 480);   // Mengatur jendela lebar awal & tinggi
   glutInitWindowPosition(100, 100); // Posisi jendela awal pojok kiri
   glutCreateWindow(title);          // Buat jendela dengan judul yang diberikan
   glutDisplayFunc(display);       // Menampilkan fungsi
   glutReshapeFunc(reshape);       // membentuk kembali jendela
   initGL();                       // inisialisasi OpenGL kita sendiri
   glutTimerFunc(0, timer, 0);     // timer panggilan langsung [NEW]
   glClearColor(0,0,100,50);
    glutMainLoop();    // proses pengulangan

   return 0;
}
