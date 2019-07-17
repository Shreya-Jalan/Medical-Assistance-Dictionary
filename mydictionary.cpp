
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include<stdbool.h>
#include<string.h>
#include<fstream>

using namespace std;

#define total_alphabet (26)
#define char_to_index(c) ((int)c - (int)'a')

structTrieNode
{
	structTrieNode *children[total_alphabet];
	char meaning[50];
	boolisEOW;
};

typedefTrieNodeTrieNode;

TrieNode * newnode()
{
	int i=0;
	TrieNode *newnode = (TrieNode*)malloc(sizeof(TrieNode));
	newnode->isEOW = false;
	for(i = 0;i<total_alphabet;i++)
		newnode->children[i] = NULL;
	memset (newnode->meaning,'\0',50);
	returnnewnode;
}

struct history
{
	char data[50];
	struct history *next;
}*top=NULL;

void insert(TrieNode* root)
{
	fstream file;
	file.open("C:\\Users\\dell\\Desktop\\Sem 3\\Govinda k\\universal.dat",ios::in|ios::out|ios::app);
	xy2:
char key[50], ch, mean[50];
memset (key,'\0',50);
memset (mean,'\0',50);
cout<<"\n\nEnter a Symptom: ";
cin.getline(key,50);
fflush(stdin);
cout<<"\n\nEnter Medicine: ";
cin.getline(mean,50);
fflush(stdin);
int i, j, k;
    j = strlen(key);
TrieNode* temp = root;
for(i = 0; i < j; i++)
    {
        k = char_to_index(key[i]);
if(!temp->children[k])
temp->children[k] = newnode();
temp = temp->children[k];
    }
strcpy(temp->meaning, mean);
temp->isEOW = true;
    {
file.write(key,(strlen(key)));
file<<"\n";
file.write(mean,strlen(mean));
file<<"\n";
file<<"\n";
    }
x:
cout<<"\n\nDo you want to add more Symptoms?(y/n): ";
cin>>ch;
fflush(stdin);
if(ch == 'y'||ch=='Y')
goto xy2;
else if(ch=='N'||ch=='n')
return;
else
    {
cout<<"you have entered wrongly. Please enter again."<<'\n';
goto x;
    }
	file.close();
}

voiddelette_file(TrieNode* root, char * key)
{

char word[50];
int temp = 0, temp1=0;
fstreamfil;
ofstream o;
o.open("C:\\Users\\dell\\Desktop\\Sem 3\\Govinda k\\uni.dat",ios::app);
fil.open("C:\\Users\\dell\\Desktop\\Sem 3\\Govinda k\\universal.dat",ios::in|ios::app);
if(!fil)
    {
	cout<<"File is not found";
	exit(0);
	}
	else
	{
	while(!fil.eof())
	    {
	fil>>word;
			if(strcmp(key, word)==0)
	        {
	fil>>word;
	            temp1=1;
	        }
	else
	        {
				o.write(word,strlen(word));
		temp++;
		if(temp%2==0)
					o<<"\n\n";
				else
					o<<"\n";
	        }
	    }
	if(temp1==0)
		cout<<"\n\nSymptom NOT Found !!!!";
	}
	o.close();
	fil.close();
	//remove("C:\\Users\\AchyutTripathi\\Desktop\\dictionary.txt");
	//rename("C:\\Users\\AchyutTripathi\\Desktop\\tempdictionary.txt","C:\\Users\\AchyutTripathi\\Desktop\\dictionary.txt");
}
voiddelette_tree(TrieNode* root, char * key)
{
	int i, j, k;
	j = strlen(key);
	TrieNode* temp1 = root;
	for(i = 0; i < j; i++)
	{
		k = char_to_index(key[i]);
		if(!temp1->children[k])
		{
			cout<<"\n\nSymptoms NOT Found !!!!";
			break;
		}
		temp1 = temp1->children[k];
	}
	if(temp1 != NULL && temp1->isEOW)
	{
		temp1->isEOW = false;
	}
	else if(temp1==NULL)
    {
free(temp1);
    }
}

void push(char * key)
{

	struct history *newhistory;
	newhistory=(struct history*)malloc(sizeof(struct history));
	strcpy(newhistory->data,key);
	if(top==NULL)
	{
		newhistory->next=NULL;
	}
	else
		newhistory->next=top;
	top=newhistory;
}

void search(TrieNode* root)
{
ifstream file;
	file.open("C:\\Users\\dell\\Desktop\\Sem 3\\Govinda k\\universal.dat", ios::in);
	xy3:
	char key[50], ch,word[50],mean[50];
	int temp=0;
	cout<<"\n\nEnter the symptom to Search: ";
	gets(key);
	fflush(stdin);
	push(key);
	while(!file.eof())
    {
file.getline(word,50);
if(strcmp(key,word)==0)
        {
temp=1;
break;

        }

    }
file.getline(mean,50);
cout<<"\n\nMedicine: ";
puts(mean);
if(temp==0)
    {
int i, j, k;
        j = strlen(key);
TrieNode* temp = root;
for(i = 0; i < j; i++)
        {
            k = char_to_index(key[i]);
if(!temp->children[k])
            {
cout<<"\n\nSymptoms NOT Found !!!!";
break;
            }
temp = temp->children[k];
        }
if(temp != NULL && temp->isEOW)
        {
cout<<"\n\nMedicine: ";
puts(temp->meaning);
        }
    }
x3:
	cout<<"\n\n\nDo you want to search more Symptoms?(y/n): ";
	cin>>ch;
	fflush(stdin);
	if(ch == 'y'||ch=='Y')
		goto xy3;
else if(ch=='n'||ch=='N')
return;
else
    {
cout<<"you have entered wrongly. Please enter it again"<<'\n';
goto x3;
    }
file.close();
}

int main()
{
system("cls");
	char ch1,st[50];
	intch;
	TrieNode* root = newnode();
	xy1:
system("cls");
cout<<'\n'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"The Medicinal dictionary Menu!!!"<<'\n'<<'\n';
	cout<<"1.Insert the symptoms and medicines: "<<'\n'<<'\n';
	cout<<"2.Search for the symptoms and display its Medicine:"<<'\n'<<'\n';
	cout<<"3.Delete the Symptoms and its medicine:"<<'\n'<<'\n';
	cout<<"4.Exit for the program:"<<'\n'<<'\n';
	cout<<"Please enter your choice:"<<'\n'<<'\n';
	cin>>ch;
	fflush(stdin);
	switch(ch)
	{
		case 1:
		system("cls");
printf("\n\n\n\t\t\t\t\t\t--------Insert Symptoms--------");
			insert(root);
			break;
		case 2:
		system("cls");
			printf("\n\n\n\t\t\t\t\t\t--------SEARCH SYmptoms--------");
			search(root);
			break;
		case 3:
		system("cls");
			printf("\n\n\n\t\t\t\t\t\t--------DELETE Symptoms--------");
			cout<<"\n\n\nEnter a Word to delete: ";
			gets(st);
fflush(stdin);
			delette_tree(root, st);
			cout<<"\n\nPress Enter for Delete from File";
			getchar();
			delette_file(root, st);
			break;
		case 4:
			cout<<"Your program is terminating!!!"<<'\n';
			exit(0);
default:
cout<<"You have entered the wrong option:"<<'\n';
	}
	x1:
	cout<<"Do you want to perform more operations?"<<'\n';
	cin>>ch1;
	fflush(stdin);
	if(ch1 == 'y'||ch1=='Y')
		goto xy1;
else if(ch1=='N'||ch1=='n')
return 0;
else
cout<<"You have entered the wrong option! Please enter again"<<'\n';
goto x1;
	return 0;
}
