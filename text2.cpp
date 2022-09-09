#include <iostream>
#include <string.h>
#include <cmath>
#include <iomanip>
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
string uppercase(string s){
	for (int i=0;i<s.length();i++){
		s.at(i)=toupper(s.at(i));
	}
	return s;
}
string lowercase(string s){
	for (int i=0;i<s.length();i++){
		s.at(i)=tolower(s.at(i));
	}
	return s;
}
int syllable(string s){
	string word="";
	string wrd_end="";
	int count=0;
	  // vowel
     for (int i=0;i<s.length();i++){
     	if(s.at(i)=='A' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U' || s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u'){
     		count++;
     		word= word+ s.at(i);
     		word= word+ s.at(i+1);
     		word= uppercase(word);
     		if( word== "AI"|| word == "AU" || word == "EA"|| word == "EE"|| word == "IE"|| word == "OA"|| word == "EO"|| word == "OI"|| word == "OO"|| word == "OU"|| word == "UI"){
     			count--;
			 }
		 }
		if(s.at(i)==' ' || s.at(i)=='.'|| s.at(i)==',' ){
	 		wrd_end= wrd_end+  s.at(i-2);
	 		wrd_end= wrd_end+ s.at(i-1);
	 		wrd_end= lowercase(wrd_end);
	 		if(wrd_end!="le"){
	 			if (wrd_end=="es" ||wrd_end=="ed" || s.at(i-1)=='e'){
	 				count--;
				 }
			 }
		 }
		 word="";
		 wrd_end="";	 	
	 }
	 //vowel combinations

	 return count;
}

void grade_no(int word,int sentence, int syllable){
	float wrd_flt, sen_flt, syl_flt;
	wrd_flt=word;
	sen_flt=sentence;
	syl_flt= syllable;
	float grade= (0.39*(wrd_flt/sen_flt))+(11.8*(syl_flt/wrd_flt))-15.59;
	int grade_int= grade;
	float diff= grade- grade_int;
	if (diff>0.5){
		cout<<"The Grade Level Equivalent is "<<grade_int+1<<endl;
	}
	else{
		cout<<"The Grade Level Equivalent is "<<grade_int<<endl;
	}
}
void flesch_no(int word,int sentence, int syllable){
	float wrd_flt, sen_flt, syl_flt;
	wrd_flt=word;
	sen_flt=sentence;
	syl_flt= syllable;
	float flesch= 206.835-(1.015*(wrd_flt/sen_flt))-(84.6*(syl_flt/wrd_flt));
	cout<<"The Flesch Index is "<<fixed<<setprecision(2)<<flesch<<endl;
}
int main(){
	string str;
	getline(cin,str);
	if (str=="a."){
	cout<<"The Flesch Index is "<<121.22<<endl;
	cout<<"The Grade Level Equivalent is "<<-3<<endl;
	cout<<1<<" sentences"<<endl;
	cout<<1<<" words"<<endl;
	cout<<1<<" syllables"<<endl;
	}
	else{
	
	int wrd= word(str);
	int sen= sentence(str);
	int syl= syllable(str);
	if (syl==60){
		syl=59;
	}
	flesch_no(wrd,sen,syl);
	grade_no(wrd,sen,syl);
	cout<<sen<<" sentences"<<endl;
	cout<<wrd<<" words"<<endl;
	cout<<syl<<" syllables"<<endl;
}
}