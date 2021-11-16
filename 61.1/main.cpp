#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
class file{
      ifstream inFile;    
	  string kurd[1000];
	  int tri=0;
	  int fro=0;
      public:
      void start();
      void loop();
      ~file();
};
void file::start() {
	
    inFile.open("napisy.txt");
    if (!inFile.good())
        {
        	
        	cerr << "Error-File cannot be accesed";
            exit(1);
        }
    
}
file::~file() {
    inFile.close();
}
void file::loop(){
	start();
	for(int i=0;i<400;i++){
		inFile>>kurd[i];
	}
	
	
	for(int i=0;i<400;i=i+2){
		int fr = kurd[i].length();
		int sc = kurd[i+1].length();
		//cout<< kurd[i]<<" "<<kurd[i+1]<<endl;
		
	}
	
	cout<<"72.2:"<<endl;
	for(int i=0;i<400;i=i+2){
		int fr = kurd[i].length();
		int sc = kurd[i+1].length();
		//cout<< kurd[i]<<" "<<kurd[i+1]<<endl;
		if(fr*3<=sc or sc*3<=fr){
			tri++;
		}
		if(fr<=sc && kurd[i+1].substr(0,kurd[i].length())==kurd[i]){
			fro++;
			cout<< kurd[i]<<" "<<kurd[i+1]<<endl;
		}
	}
	cout<<"72.1:"<<endl<<tri<<endl;
}
int main(int argc, char *argv[])
{
	file dd;
	dd.loop();
	
    return EXIT_SUCCESS;
}

