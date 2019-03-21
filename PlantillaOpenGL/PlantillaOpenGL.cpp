// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>



#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"

#include "Modelo.h"

using namespace std;



Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *triangulo;
Modelo *cuadrado;



void inicializarCuadrado() {

	cuadrado = new Modelo();

	Vertice v1 = {
		vec3(-0.5f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v2 = {
		vec3(0.5f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v3 = {
		vec3(0.5f,0.5f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v4 = {
		vec3(-0.5f,0.5f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};


	Vertice v5 = {
	vec3(-0.4f,0.5f,0.0f),
	vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v6 = {
		vec3(0.4f,0.5f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v7 = {
		vec3(0.4f,0.6f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v8 = {
		vec3(-0.4f,0.6f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};



	Vertice v9 = {
	vec3(-0.3f,0.6f,0.0f),
	vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v10 = {
		vec3(0.3f,0.6f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v11 = {
		vec3(0.3f,0.7f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v12 = {
		vec3(-0.3f,0.7f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};



	Vertice v13 = {
	vec3(-0.4f,0.4f,0.0f),
	vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v14 = {
		vec3(-0.4f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v15 = {
		vec3(-0.3f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v16 = {
		vec3(-0.3f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};



	Vertice v17= {
	vec3(-0.2f,0.4f,0.0f),
	vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v18 = {
		vec3(-0.2f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v19 = {
		vec3(-0.1f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v20 = {
		vec3(-0.1f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};



	Vertice v21 = {
		vec3(0.1f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v22 = {
		vec3(0.1f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v23 = {
		vec3(0.2f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v24 = {
		vec3(0.2f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};


	Vertice v25 = {
		vec3(0.1f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v26 = {
		vec3(0.1f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v27 = {
		vec3(0.2f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v28 = {
		vec3(0.2f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};



	Vertice v29 = {
		vec3(0.3f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v30 = {
		vec3(0.3f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v31 = {
		vec3(0.4f,0.3f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};

	Vertice v32 = {
		vec3(0.4f,0.4f,0.0f),
		vec4(0.0,0.0,0.0,1.0)
	};


	Vertice v33 = {
		vec3(-0.1f,-0.6f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v34 = {
		vec3(0.1f,-0.6f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v35 = {
		vec3(0.1f,-0.5f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v36 = {
		vec3(-0.1f,-0.5f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};



	Vertice v37 = {
		vec3(-0.05f,-0.5f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v38 = {
		vec3(0.05f,-0.5f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v39 = {
		vec3(0.05f,-0.45f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};

	Vertice v40 = {
		vec3(-0.05f,-0.45f,0.0f),
		vec4(0.0,0.4,0.0,1.0)
	};




	Vertice v41 = {
		vec3(-0.2f,0.5f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v42 = {
		vec3(-0.1f,0.5f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v43 = {
		vec3(-0.1f,0.6f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v44 = {
		vec3(-0.2f,0.6f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};



	Vertice v45 = {
		vec3(0.2f,0.5f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v46 = {
		vec3(0.1f,0.5f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v47 = {
		vec3(0.1f,0.6f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};

	Vertice v48 = {
		vec3(0.2f,0.6f,0.0f),
		vec4(0.5,0.0,0.0,1.0)
	};


	cuadrado->vertices.push_back(v1);
	cuadrado->vertices.push_back(v2);
	cuadrado->vertices.push_back(v3);
	cuadrado->vertices.push_back(v4);

	cuadrado->vertices.push_back(v5);
	cuadrado->vertices.push_back(v6);
	cuadrado->vertices.push_back(v7);
	cuadrado->vertices.push_back(v8);

	cuadrado->vertices.push_back(v9);
	cuadrado->vertices.push_back(v10);
	cuadrado->vertices.push_back(v11);
	cuadrado->vertices.push_back(v12);

	cuadrado->vertices.push_back(v13);
	cuadrado->vertices.push_back(v14);
	cuadrado->vertices.push_back(v15);
	cuadrado->vertices.push_back(v16);

	cuadrado->vertices.push_back(v17);
	cuadrado->vertices.push_back(v18);
	cuadrado->vertices.push_back(v19);
	cuadrado->vertices.push_back(v20);

	cuadrado->vertices.push_back(v21);
	cuadrado->vertices.push_back(v22);
	cuadrado->vertices.push_back(v23);
	cuadrado->vertices.push_back(v24);


	cuadrado->vertices.push_back(v25);
	cuadrado->vertices.push_back(v26);
	cuadrado->vertices.push_back(v27);
	cuadrado->vertices.push_back(v28);


	cuadrado->vertices.push_back(v29);
	cuadrado->vertices.push_back(v30);
	cuadrado->vertices.push_back(v31);
	cuadrado->vertices.push_back(v32);


	cuadrado->vertices.push_back(v33);
	cuadrado->vertices.push_back(v34);
	cuadrado->vertices.push_back(v35);
	cuadrado->vertices.push_back(v36);

	cuadrado->vertices.push_back(v37);
	cuadrado->vertices.push_back(v38);
	cuadrado->vertices.push_back(v39);
	cuadrado->vertices.push_back(v40);

	cuadrado->vertices.push_back(v41);
	cuadrado->vertices.push_back(v42);
	cuadrado->vertices.push_back(v43);
	cuadrado->vertices.push_back(v44);

	cuadrado->vertices.push_back(v45);
	cuadrado->vertices.push_back(v46);
	cuadrado->vertices.push_back(v47);
	cuadrado->vertices.push_back(v48);

}

void inicializarTriangulo() {

	triangulo = new Modelo();
	
}



void dibujar() {

	triangulo->dibujar(GL_TRIANGLES);
	cuadrado->dibujar(GL_QUADS);

}

void actualizar() {
	
}


int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//---------------------------------------------------------------------....................................................................................

	//AQUI INICIALIZAMOS METODOS/PROCEDIMIENTO
	
	inicializarTriangulo();
	inicializarCuadrado();




	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();




	//-------------AQUI MANDAMOS LLAMAR LOS SHADERS Y VERTEX ARRAY DE LOS OBJETOS------------------------

	/*----------------------------------TRIANGULO----------------------------------*/
	//Establecer shader al modelo
	triangulo->shader = shader;
	//Inicializar el vertex array
	triangulo->inicializarVertexArray(posicionID, colorID);



	/*----------------------------------CUADRADO----------------------------------*/
	//Establecer shader al modelo
	cuadrado->shader = shader;
	//Inicializar el vertex array
	cuadrado->inicializarVertexArray(posicionID, colorID);





	//----------------------------------------------------------------------....................................................................................

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {

		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);

		//Establece el color de borrado
		glClearColor(1, 0.2, 0.5, 1);

		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);

		//Reconocer si hay entradas
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;

}

