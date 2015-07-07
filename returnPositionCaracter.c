/* Retorna a posição de um caracter*/
int findPosf(const char *string,char caracter){
    int i,pos;
    for(i=0; i < strlen(string);i++){
        if(string[i]==caracter){
            pos=i;            
            break;
        }
    }
    return pos;
}
