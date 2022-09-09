#include <iostream>
#include <string.h>
using namespace std;
int word(string s){
     int count=0;
     s=s+" ";
     for (int i=0;i<s.length();i++){
     	if(s.at(i)==' '){
     		count++;
		 }
	 }
	 return count;
}
int sentence(string s){
	int count=0;
    for (int i=0;i<s.length();i++){
     	if(s.at(i)=='.' || s.at(i)=='?' ||s.at(i)=='!' ||s.at(i)==':' ||s.at(i)==';'){
     		count++;
		 }
	 }
	 return count;
}
int syllable(string s){
	string word;
	int count=0;
	  // vowel
     for (int i=0;i<s.length();i++){
     	if(s.at(i)=='A' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U' || s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u'){
     		count++;
     		word= toupper(s.at(i)+s.at(i+1));
     		if( word== "AI"|| word == "AU" || word == "EA"|| word == "EE"|| word == "IE"|| word == "OA"|| word == "EO"|| word == "OI"|| word == "OO"|| word == "OU"|| word == "UI"){
     			count--;
			 }
		 }
		
	 }
	 //vowel combinations
	 
	 return count;
}
int main(){
	string str;
	getline(cin,str);
	int wrd= word(str);
	int sen= sentence(str);
	int syl= syllable(str);
	float flesch= 206.835-(1.015*(wrd/sen))-(84.6*(syl/wrd));
	int grade= (0.39*(wrd/sen))+(11.8*(syl/wrd))-15.59;
	cout<<"The Flesch Index is "<<flesch<<endl;
	cout<<"The Grade Level Equivalent is "<<grade<<endl;
	cout<<sen<<" sentences"<<endl;
	cout<<wrd<<" words"<<endl;
	cout<<syl<<" syllables"<<endl;
}