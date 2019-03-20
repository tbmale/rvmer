#include<stdio.h>
#include"rvmerlib.h"

void main(int argc,char*argv[]){
  if(argc<3){
    printf("Syntax: %s infile outfile",argv[0]);
    return;
  }
  printf("infile:%s\noutfile:%s\nresult: %d",argv[1],argv[2],rvmer_read(argv[1],argv[2]));
}