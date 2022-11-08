#include "header.h"

int search (char* path){
FILE *fp;
fp = fopen(path, "r");
char buffer[255] = { 0 };
int k = 0; 
int q = 0;
int w = 0;
int e = 0;
while(fgets(buffer, sizeof(buffer), fp) != NULL){
      
        int i = 0;
        while(buffer[i] != '\n'){

               
                if (buffer[i] == '('){k+=1;}
                if (buffer[i] == '['){q+=1;}
                if (buffer[i] == '{'){w+=1;}
                if (buffer[i] == '<'){e+=1;}
                if (buffer[i] == ')'){k-=1;}
                if (buffer[i] == ']'){q-=1;}
                if (buffer[i] == '}'){w-=1;}
                if (buffer[i] == '>'){e-=1;}
                i+=1;
        
        }
        buffer[255] = "";

}
 if((k == 0) && (q == 0) && (w == 0) && (e == 0)){
        return 1;
 }
 else{
        printf("%d %d %d %d\n", k, q, w, e);
        return 0;
 }
 
  
}
