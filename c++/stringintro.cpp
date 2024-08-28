 #include <iostream>
 #include <string>

using namespace std;
int main (){
  //cin limitation
string S="akashahmad";
    for(int i = 0; S[i] != '\0'; ++i)
   cout << S[i] <<" ";

   string S1=S.substr(3,5); //substring from 3, size 5
   cout <<endl <<S1 <<endl;

string T = "akashahmada";
cout<<endl <<S.compare(T) <<endl; //compare strings =0 when same strings 

   cout <<endl <<S.size() <<" "<< S.max_size() <<" " <<S.length() <<" "<<S.capacity() <<endl;
   S.resize(7); //resize capacity same,clears rest elements
      cout <<endl <<S.size() <<" "<< S.max_size() <<" " <<S.length() <<" "<<S.capacity() <<endl;
   S.reserve (40); //reserves space size same 
      cout <<endl <<S.size() <<" "<< S.max_size() <<" " <<S.length() <<" "<<S.capacity() <<endl;

        for(int i = 0; S[i] != '\0'; ++i)
   cout << S[i] <<" ";

 S.resize(15);
  for(int i = 0; S[i] != '\0'; ++i)
   cout << S[i] <<" ";
cout <<endl;

S.insert(6,"malik"); //malik gets inserted into string at s[6]
 for(int i = 0; S[i] != '\0'; ++i)
   cout << S[i] <<" ";
 cout <<endl;
 for(int i = 0;i<15; ++i)
   cout << S[i] <<" ";

S.clear(); //clears size capacity same
cout <<endl <<S.size() <<" "<< S.max_size() <<" " <<S.length() <<" "<<S.capacity() <<endl;
cout <<S[7] <<S[6] <<S[5] <<S[4];
S.shrink_to_fit(); //shrinks capacity to fit
   cout <<endl <<S.size() <<" "<< S.max_size() <<" " <<S.length() <<" "<<S.capacity() <<endl;
   cout <<S.empty() <<endl;
   for(int i = 0; S[i] != '\0'; ++i){
   cout << S[i] <<" ";
}
   
}

/*
#include <iostream>
#include <fstream>
#include <string>

int main ()
{
  std::string str;

  std::ifstream file ("test.txt",std::ios::in|std::ios::ate);
  if (file) {
    std::ifstream::streampos filesize = file.tellg();
    str.reserve(filesize);

    file.seekg(0);
    while (!file.eof())
    {
      str += file.get();
    }
    std::cout << str;
  }
  return 0;
} */