#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <string.h>
int p=0;
int con[50];
int e=0;

FILE *archivo;

int vpila_1500[1501];
int vcola_1500[1501];
int vlista_1500[1501];

struct nodo{
int nro;
struct nodo *sgte;
};

typedef struct nodo *puntero;

puntero cima;

void pila();
void menup();
void pilas();
void Apilar(int);
bool Pilavacia();
void Mostrarpila();
int Desapilar();
void buscar_elemento();
void Destruirpila();
void ordenar_asendente();
void guardar_pila();
void cargarArchivo_pila();

//pilas
void pilas_100();
void pilas_200();
void pilas_500();
void pilas_1000();
void pilas_1500();

//colas
void colas_100();
void colas_200();
void colas_500();
void colas_1000();
void colas_1500();

//listas
void listas_100();
void listas_200();
void listas_500();
void listas_1000();
void listas_1500();



void impri();

void menuc();
void menu_lista();
void Pila(){


    cima=NULL;
}
int n=0;
int nc=0;
int nl=0;
int main(){


menup();


    return 0;
}


void menup(){
e=0;

cima=NULL;
int opc;
system("cls");

printf("\t\t   MENU\n\n");
printf("\t\t1. pilas\n\n");
printf("\t\t2. colas\n\n");
printf("\t\t3. listas\n\n");
printf("\t\tingrese una opcion: ");
scanf("%d",&opc);

switch(opc){

case 1:pilas();
    break;
case 2:menuc();
    break;
case 3:menu_lista();
    break;

    }

}



bool Pilavacia(){

    if(cima==NULL){
    	return true;
	}
    else{
    	return false;
	}
}

void Apilar(int x){

puntero p_aux;
p_aux=new(struct nodo);
p_aux->nro=x;
con[p]=p_aux->nro;
p_aux->sgte=cima;
cima=p_aux;
p++;

}



void pilas_100(){
n=100;
   for(int i=0;i<1500;i++){
   vpila_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<100;i++){
    vpila_1500[i]=rand()%101;
    Apilar(vpila_1500[i]);

}

printf("\n\t\tlos 100 numeros se crearon con exito\n\n");



}

void pilas_200(){
n=200;
     for(int i=0;i<1500;i++){
   vpila_1500[i]=0;
   }

    srand(time(0));
for(int i=0;i<200;i++){
    vpila_1500[i]=rand()%201;
    Apilar(vpila_1500[i]);

}

printf("\n\t\tlos 200 numeros se crearon con exito\n\n");

}

void pilas_500(){
n=500;
    for(int i=0;i<1500;i++){
   vpila_1500[i]=0;
   }

    srand(time(0));
for(int i=0;i<500;i++){
    vpila_1500[i]=rand()%501;
    Apilar(vpila_1500[i]);

}

printf("\n\t\tlos 500 numeros se crearon con exito\n\n");

}
void pilas_1000(){


        n=1000;
       for(int i=0;i<1500;i++){
        vpila_1500[i]=0;
        }

    srand(time(0));
for(int i=0;i<1000;i++){
    vpila_1500[i]=rand()%1001;
    Apilar(vpila_1500[i]);

}

printf("\n\t\tlos 1000 numeros se crearon con exito\n\n");

}
void pilas_1500(){
    cima=NULL;
    n=1500;
    srand(time(0));

for(int i=0;i<1500;i++){
    vpila_1500[i]=rand()%1501;
    Apilar(vpila_1500[i]);

}

printf("\n\t\tlos 1500 numeros se crearon con exito\n\n");

}

void Mostrarpila(){

puntero p_aux;
p_aux=cima;
int i=0,j=0;
while(p_aux!=NULL){
    printf("#%d: %d\n",i+1,p_aux->nro);
    vpila_1500[j]=p_aux->nro;
    p_aux=p_aux->sgte;
i++;
j++;
    }

    system("pause");


}


int Desapilar(){
n=n-1;

int x;
puntero p_aux;
if(cima==NULL){
    printf("\n\n\tpila vacia...!!");
}else{
    p_aux=cima;
    x=p_aux->nro;
    cima=cima->sgte;
    delete(p_aux);
    }
return x;

}




void pilas(){



    system("cls");
int opc;
int opc2;
printf("\t\tingrese la cantidad de numeros a generar\n\n");
printf("\t\t1. 100\n\n");
printf("\t\t2. 200\n\n");
printf("\t\t3. 500\n\n");
printf("\t\t4. 1000\n\n");
printf("\t\t5. 1500\n\n");
printf("\t\t6. cargar\n\n");
printf("\t\tingrese una opcion: ");
scanf("%d",&opc);

switch(opc){
case 1:
    pilas_100();
    break;
case 2:
    pilas_200();
    break;
case 3:
    pilas_500();
    break;
case 4:
    pilas_1000();
    break;
case 5:
    pilas_1500();
    break;
case 6:cargarArchivo_pila();

    break;
    }
system("pause");


do{
    system("cls");
printf("\t\t MENU PILAS\n\n");
printf("\t\t1. cargar\n\n");
printf("\t\t2. mostrar\n\n");
printf("\t\t3. eliminar\n\n");
printf("\t\t4. buscar\n\n");
printf("\t\t5. eliminar estructura\n\n");
printf("\t\t6. guardar\n\n");
printf("\t\t7. ordenar datos\n\n");
printf("\t\t8. menu principal\n\n");
printf("\t\tingrese una opcion: ");
scanf("%d",&opc2);

switch(opc2){
case 1:cargarArchivo_pila();
    break;
case 2:Mostrarpila();
    break;
case 3:Desapilar();
    break;
case 4:buscar_elemento();
    break;
case 5:Destruirpila();
    break;
case 6:guardar_pila();
    break;
case 7:ordenar_asendente();
    break;
case 8:



    menup();
    break;
}

    }while(opc2!=8);



}






void buscar_elemento(){
 bool ban=false;
printf("\t\tingrese un elemento a buscar: ");
scanf("%d",&e);

for(int i=0;i<n;i++){

if(vpila_1500[i]==e){
    ban=true;
    }
}

if(ban==true){

    printf("\n\t\telemento %d SI ha sido encontrado en  la pila\n\n",e);
    }else{
        printf("\n\t\telemento %d NO ha sido econtrado en la pila\n\n",e);
        }
system("pause");
}

void Destruirpila(){
    n=0;
puntero p_aux;

while(cima!=NULL){
    p_aux=cima;
    cima=cima->sgte;
    delete(p_aux);

    }

}

void ordenar_asendente(){
 int cambio=0;
    //metodo de ordenamiento burbuja
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
        if(vpila_1500[j]>vpila_1500[j+1]){
            cambio=vpila_1500[j];
            vpila_1500[j]=vpila_1500[j+1];
            vpila_1500[j+1]=cambio;
        }
   }
}
//imprimir en orden
printf("orden acendente:\n" );
for(int i=0;i<n;i++){
    printf("#%d: %d\n",i+1,vpila_1500[i+1]);
}
system("pause");
}


void guardar_pila(){

char direccion[]="D:\\archivo\\pilas.txt";
archivo=fopen(direccion,"w");
if(archivo==NULL){
        printf("\n\t\t\tno se pudo guardar el archivo\n");

    }else{
        printf("\n\t\tse guardo el archivo\n");
        printf("\n\t\tubicacion: %s\n\n",direccion);
        system("pause");

    }


for(int i=0;i<n;i++){
    fprintf(archivo,"%d\n", vpila_1500[i]);
    }


 fclose(archivo);

}


void cargarArchivo_pila(){
    int numero;
    printf("\tCARGANDO ARCHIVO...\n\n");
    char direccion[]="D:\\archivo\\pilas.txt";

    archivo = fopen(direccion,"r");

    if(archivo==NULL){
        printf("\tError al abrir el archivo...\n");
        system("pause");
    }else{
        while(!feof(archivo)){ //Leer archivo hasta el final
            fscanf(archivo, "%d\n", &numero);
            printf("\t%d\n", numero);
        }
    }
    system("pause");
    fclose(archivo);
}














//COLAS










struct nodo2{

int nro;
struct nodo2 *sgte;
};

typedef struct nodo2 *puntero2;

puntero2 delante;
puntero2 atras;



void Cola();
void Encolar(int);
int Desencolar();
bool Colavacia();
void Mostrarcola();
void Vaciarcola();
void menup();
void buscar_cola();
void ordenar_asendente_cola();
void guardar_cola();
void cargarArchivo_cola();


void Cola(){
     delante=NULL;
      atras=NULL;

}

bool Colavacia(){
if(delante==NULL){
    return true;
}else{
return false;
    }

}


void Encolar(int x){
puntero2 p_aux;

p_aux=new(struct nodo2);
p_aux->nro=x;
p_aux->sgte=NULL;

if(delante==NULL){
    delante=p_aux;
}else{
    atras->sgte=p_aux;

}
atras=p_aux;
}

int Desencolar(){
nc=nc-1;
int n;
puntero2 p_aux;
p_aux=delante;
n=p_aux->nro;
delante=(delante)->sgte;
delete(p_aux);
return n;

}

void Mostrarcola(){
puntero2 p_aux;
p_aux=delante;
int i=0;
while(p_aux!=NULL){
    printf("#%d: %d\n",i+1,p_aux->nro);
    vcola_1500[i]=p_aux->nro;
    p_aux=p_aux->sgte;
    i++;
    }
    printf("\n");
system("pause");
}


void Vaciarcola(){
puntero2 p_aux,r_aux;
p_aux=delante;
while(p_aux!=NULL){
    r_aux=p_aux;
    p_aux=p_aux->sgte;
    delete(r_aux);
    delante=NULL;
    atras=NULL;

    }
    printf("\n\t\tcola vacia con exito\n\n");
    system("pause");
}

void menuc (){

system("cls");
int opc;
int opc2;
printf("\t\tingrese la cantidad de numeros a generar\n\n");
printf("\t\t1. 100\n\n");
printf("\t\t2. 200\n\n");
printf("\t\t3. 500\n\n");
printf("\t\t4. 1000\n\n");
printf("\t\t5. 1500\n\n");
printf("\t\t6. cargar\n\n");
printf("\t\tingrese una opcion: ");
scanf("%d",&opc);

switch(opc){
case 1:colas_100();
    break;
case 2:colas_200();
    break;
case 3:colas_500();
    break;
case 4:colas_1000();
    break;
case 5:colas_1500();
    break;
case 6:cargarArchivo_cola();
    break;
    }
system("pause");

    int x;
    int op=0;

do{
            system("cls");
    printf("\t\t MENU COLAS\n\n");
    printf("\t\t1. cargar\n\n");
    printf("\t\t2. mostrar\n\n");
    printf("\t\t3. eliminar\n\n");
    printf("\t\t4. buscar\n\n");
    printf("\t\t5. eliminar estructura\n\n");
    printf("\t\t6. guardar\n\n");
    printf("\t\t7. ordenar datos\n\n");
    printf("\t\t8. menu principal\n\n");
    printf("\t\tingrese una opcion: ");


    scanf("%d",&op);
    switch(op){
        case 1:cargarArchivo_cola();
                break;
        case 2:Mostrarcola();
            break;
        case 3:Desencolar();
            break;
        case 4:buscar_cola();
            break;
        case 5:Vaciarcola();
            break;
        case 6:guardar_cola();
            break;
        case 7:ordenar_asendente_cola();
            break;
        case 8:Cola();
               menup();
            break;

        default:
            printf("\n\n");
            printf("\n\n\tIngrese una opcion valida...!!");
    }

        system("cls");
}while(op!=8);


}



void colas_100(){

nc=100;
   for(int i=0;i<1500;i++){
   vcola_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<100;i++){
    vcola_1500[i]=rand()%101;
    Encolar(vcola_1500[i]);

}

printf("\n\t\tlos 100 numeros se crearon con exito\n\n");

}
void colas_200(){

nc=200;
   for(int i=0;i<1500;i++){
   vcola_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<200;i++){
    vcola_1500[i]=rand()%201;
    Encolar(vcola_1500[i]);

}

printf("\n\t\tlos 200 numeros se crearon con exito\n\n");

}

void colas_500(){

nc=500;
   for(int i=0;i<1500;i++){
   vcola_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<500;i++){
    vcola_1500[i]=rand()%501;
    Encolar(vcola_1500[i]);

}

printf("\n\t\tlos 500 numeros se crearon con exito\n\n");

}

void colas_1000(){

nc=1000;
   for(int i=0;i<1500;i++){
   vcola_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<1000;i++){
    vcola_1500[i]=rand()%1001;
    Encolar(vcola_1500[i]);

}

printf("\n\t\tlos 1000 numeros se crearon con exito\n\n");

}

void colas_1500(){

nc=1500;
   for(int i=0;i<1500;i++){
   vcola_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<1500;i++){
    vcola_1500[i]=rand()%1501;
    Encolar(vcola_1500[i]);

}

printf("\n\t\tlos 1500 numeros se crearon con exito\n\n");

}


void buscar_cola(){
    int e=0;
 bool ban=false;
printf("\t\tingrese un elemento a buscar: ");
scanf("%d",&e);

for(int i=0;i<nc;i++){

if(vcola_1500[i]==e){
    ban=true;
    }
}

if(ban==true){

    printf("\n\t\telemento %d SI ha sido encontrado en  la cola\n\n",e);
    }else{
        printf("\n\t\telemento %d NO ha sido econtrado en la cola\n\n",e);
        }
system("pause");
}

void ordenar_asendente_cola(){
 int cambio=0;
    //metodo de ordenamiento burbuja
for(int i=0;i<nc;i++){
   for(int j=0;j<nc;j++){
        if(vcola_1500[j]>vcola_1500[j+1]){
            cambio=vcola_1500[j];
            vcola_1500[j]=vcola_1500[j+1];
            vcola_1500[j+1]=cambio;
        }
   }
}
//imprimir en orden
printf("orden acendente:\n" );
for(int i=0;i<nc;i++){
    printf("#%d: %d\n",i+1,vcola_1500[i+1]);
}
system("pause");
}



void guardar_cola(){

char direccion[]="D:\\archivo\\colas.txt";
archivo=fopen(direccion,"w");
if(archivo==NULL){
        printf("\n\t\t\tno se pudo guardar el archivo\n");

    }else{
        printf("\n\t\tse guardo el archivo\n");
        printf("\n\t\tubicacion: %s\n\n",direccion);
        system("pause");

    }


for(int i=0;i<nc;i++){
    fprintf(archivo,"%d\n",vcola_1500[i]);
    }


 fclose(archivo);

}
void cargarArchivo_cola(){
    int numero;
    printf("\tCARGANDO ARCHIVO...\n\n");
    char direccion[]="D:\\archivo\\colas.txt";

    archivo = fopen(direccion,"r");

    if(archivo==NULL){
        printf("\tError al abrir el archivo...\n");
        system("pause");
    }else{
        while(!feof(archivo)){ //Leer archivo hasta el final
            fscanf(archivo, "%d\n", &numero);
            printf("\t%d\n", numero);
        }
    }
    system("pause");
    fclose(archivo);

}













//listas





struct nodo_lista{
int dato;
nodo_lista *siguiente;
};
 nodo_lista *lista=NULL;


void insertarlista(nodo_lista *&,int);
void mostrarlista(nodo_lista *);
void eliminarnodo(nodo_lista *&,int);



void ingresar_lista();
void borrar();
void eliminar_lista(nodo_lista *&,int &);
void buscar_elemento(nodo_lista *,int );
void buscar_lista();
void guardar_listas();
void cargarArchivo_lista();
 int dato;
 void ordenar_asendente_lista();

 void insertarlista(nodo_lista *&lista,int n){
nodo_lista *nuevo_nodo_lista=new nodo_lista();
nuevo_nodo_lista->dato=n;
nodo_lista *aux1=lista;
nodo_lista *aux2;

while((aux1 != NULL)&&(aux1->dato<n)){
    aux2=aux1;
    aux1=aux1->siguiente;
    }
    if(lista==aux1){
        lista=nuevo_nodo_lista ;
    }else{
        aux2->siguiente=nuevo_nodo_lista;
    }
    nuevo_nodo_lista->siguiente=aux1;


}

void mostrarlista(nodo_lista *lista){

nodo_lista *actual =new nodo_lista();
actual = lista;
int i=0;
while(actual!=NULL){
    printf("\t\t\t%d\n",actual->dato);
    vlista_1500[i]=actual->dato;
    actual=actual->siguiente;
    i++;

    }

    system("pause");
}

void eliminarnodo(nodo_lista *&lista,int n){
if(lista != NULL){
    nodo_lista *aux_borrar;
    nodo_lista *anterior=NULL;
    aux_borrar=lista;

    while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
        anterior=aux_borrar;
        aux_borrar=aux_borrar->siguiente;
    }
    if(aux_borrar==NULL){
        printf("\n\t\tel elemento no existe\n");
    }else if(anterior==NULL){
    lista=lista->siguiente;
    printf("\n\t\telemento %d eliminado \n",n);
    delete aux_borrar;
    }else{
    anterior->siguiente=aux_borrar->siguiente;
    printf("\n\t\telemento %d eliminado \n",n);
    delete aux_borrar;
    }
}

system("pause");
}






void borrar(){
    int dato3=0;
printf("\n\t\tingrese el elemento a borrar: ");
scanf("%d",&dato3);
eliminarnodo(lista,dato3);

}

void eliminar_lista(nodo_lista *&,int &n){
    nodo_lista *aux=lista;
    n=aux->dato;
    lista=aux->siguiente;
    delete aux;
}


void buscar_elemento(nodo_lista*lista,int n){
    bool ban=false;
    nodo_lista *actual =new nodo_lista();
    actual=lista;
    while((actual!=NULL)&&(actual->dato<=n)){
        if(actual->dato==n){
            ban=true;

        }
        actual=actual->siguiente;
    }

    if(ban==true){
        printf("\n\t\telemento %d SI ha sido encontrado en  la lista\n\n",n);
    }else{
        printf("\n\t\telemento %d NO ha sido econtrado en la lista\n\n",n);
        }

}

void menu_lista(){

system("cls");
int opc;
int opc2;
printf("\t\tingrese la cantidad de numeros a generar\n\n");
printf("\t\t1. 100\n\n");
printf("\t\t2. 200\n\n");
printf("\t\t3. 500\n\n");
printf("\t\t4. 1000\n\n");
printf("\t\t5. 1500\n\n");
printf("\t\t6. cargar\n\n");
printf("\t\tingrese una opcion: ");
scanf("%d",&opc);

switch(opc){
case 1:listas_100();
    break;
case 2:listas_200();
    break;
case 3:listas_500();
    break;
case 4:listas_1000();
    break;
case 5:listas_1500();
    break;
case 6:cargarArchivo_lista();
    break;
    }
system("pause");

    int x;
    int op=0;

do{
            system("cls");
    printf("\t\t MENU LISTAS\n\n");
    printf("\t\t1. cargar\n\n");
    printf("\t\t2. mostrar\n\n");
    printf("\t\t3. eliminar\n\n");
    printf("\t\t4. buscar\n\n");
    printf("\t\t5. eliminar estructura\n\n");
    printf("\t\t6. guardar\n\n");
    printf("\t\t7. ordenar datos\n\n");
    printf("\t\t8. menu principal\n\n");
    printf("\t\tingrese una opcion: ");


    scanf("%d",&op);
    switch(op){
        case 1:cargarArchivo_lista();
                break;
        case 2:mostrarlista(lista);
            break;
        case 3:borrar();
            break;
        case 4:buscar_lista();
            break;
        case 5:while(lista!=NULL){
            eliminar_lista(lista,dato);
            }
            printf("\n\t\tlista eliminada\n\n");
            system("pause");
            break;
        case 6:guardar_listas();
            break;
        case 7:ordenar_asendente_lista();
            break;
        case 8:Cola();
               menup();
            break;

        default:
            printf("\n\n");
            printf("\n\n\tIngrese una opcion valida...!!");
    }

        system("cls");
}while(op!=8);

}
void listas_100(){
nl=100;
   for(int i=0;i<1500;i++){
   vlista_1500[i]=0;
   }


srand(time(0));
for(int i=0;i<100;i++){
    vlista_1500[i]=rand()%101;
    insertarlista(lista,vlista_1500[i]);

}

printf("\n\t\tlos 100 numeros se crearon con exito\n\n");



}

void listas_200(){
nl=200;
     for(int i=0;i<1500;i++){
        vlista_1500[i]=0;
   }

    srand(time(0));
for(int i=0;i<200;i++){
    vlista_1500[i]=rand()%201;
    insertarlista(lista,vlista_1500[i]);

}

printf("\n\t\tlos 200 numeros se crearon con exito\n\n");

}

void listas_500(){
nl=500;
    for(int i=0;i<1500;i++){
   vlista_1500[i]=0;
   }

    srand(time(0));
for(int i=0;i<500;i++){
    vlista_1500[i]=rand()%501;
    insertarlista(lista,vlista_1500[i]);

}

printf("\n\t\tlos 500 numeros se crearon con exito\n\n");

}
void listas_1000(){


        nl=1000;
       for(int i=0;i<1500;i++){
        vlista_1500[i]=0;
        }

    srand(time(0));
for(int i=0;i<1000;i++){
    vlista_1500[i]=rand()%1001;
    insertarlista(lista,vlista_1500[i]);

}

printf("\n\t\tlos 1000 numeros se crearon con exito\n\n");

}
void listas_1500(){
    cima=NULL;
    nl=1500;
    srand(time(0));

for(int i=0;i<1500;i++){
    vlista_1500[i]=rand()%1501;
    insertarlista(lista,vlista_1500[i]);

}

printf("\n\t\tlos 1500 numeros se crearon con exito\n\n");

}

void impri(){

for(int i=0;i<nl;i++){

    printf("#%d: %d\n",i+1,vlista_1500[i]);
}

}


void buscar_lista(){
    int e=0;
 bool ban=false;
printf("\t\tingrese un elemento a buscar: ");
scanf("%d",&e);

for(int i=0;i<nl;i++){

if(vlista_1500[i]==e){
    ban=true;
    }
}

if(ban==true){

    printf("\n\t\telemento %d SI ha sido encontrado en  la cola\n\n",e);
    }else{
        printf("\n\t\telemento %d NO ha sido econtrado en la cola\n\n",e);
        }
system("pause");
}
void guardar_listas(){

char direccion[]="D:\\archivo\\listas.txt";
archivo=fopen(direccion,"w");
if(archivo==NULL){
        printf("\n\t\t\tno se pudo guardar el archivo\n");

    }else{
        printf("\n\t\tse guardo el archivo\n");
        printf("\n\t\tubicacion: %s\n\n",direccion);
        system("pause");

    }


for(int i=0;i<nl;i++){
    fprintf(archivo,"%d\n",vlista_1500[i]);
    }


 fclose(archivo);

}
void cargarArchivo_lista(){
    int numero;
    printf("\tCARGANDO ARCHIVO...\n\n");
    char direccion[]="D:\\archivo\\listas.txt";

    archivo = fopen(direccion,"r");

    if(archivo==NULL){
        printf("\tError al abrir el archivo...\n");
        system("pause");
    }else{
        while(!feof(archivo)){ //Leer archivo hasta el final
            fscanf(archivo, "%d\n", &numero);
            printf("\t%d\n", numero);
        }
    }
    system("pause");
    fclose(archivo);

}

void ordenar_asendente_lista(){
 int cambio=0;
    //metodo de ordenamiento burbuja
for(int i=0;i<nl;i++){
   for(int j=0;j<nl;j++){
        if(vlista_1500[j]>vlista_1500[j+1]){
            cambio=vlista_1500[j];
            vlista_1500[j]=vlista_1500[j+1];
            vlista_1500[j+1]=cambio;
        }
   }
}
//imprimir en orden
printf("orden acendente:\n" );
for(int i=0;i<nl;i++){
    printf("#%d: %d\n",i+1,vlista_1500[i+1]);
}
system("pause");
}

