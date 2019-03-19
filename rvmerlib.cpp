#include"rvmer.hpp"
//#include"rvmerlib.h"

extern "C" {
  
char rvmer_read(const char* Ifilename,const char* Ofilename){
  RVMReader* reader=new rvmreaderlib();
  RVMParser parser(*reader);
  bool res=parser.readFile(Ifilename,Ofilename);
  return res==true?0:1;
}

}