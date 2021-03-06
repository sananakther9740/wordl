// Wordlist Creator v1.3
// Coded by @sananakther9740
// Github: github.com/sananakther9740/wordl

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


const char* charset = "abcdefghijklmnopqrstuvwxyz";
const char* charset0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char* charset1 = "0123456789";
const char* charset2 = "!@#$%*£_";
const char* charset3 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char* charset4= "abcdefghijklmnopqrstuvwxyz0123456789";
const char* charset5 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const char* charset6 = "abcdefghijklmnopqrstuvwxyz!@#$%*£_";
const char* charset7 = "abcdefghijklmnopqrstuvwxyz!@#$%*£_0123456789";
const char* charset8 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%*£_";
const char* charset9 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%*£_0123456789";
const char* charset10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const char* charset11 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%*£_";
const char* charset12 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%*£_0123456789";
const char* charset13 = "0123456789!@#$%*£_";
//const char* charset14 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%*£_0123456789";



char buffer[50];
char chr[3], cap[3], num[3], spc[3], apatt[3], cont[3];
int patt = 0;
char makepatt[32];
void permute(int level) {
  const char* charset_ptr = charset;
  if(level == -1){


    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute(level - 1);

   }
  }
}


void permute0(int level) {
  const char* charset_ptr = charset0;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute0(level - 1);
   }
  }
}


void permute1(int level) {
  const char* charset_ptr = charset1;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute1(level - 1);
   }
  }
}


void permute2(int level) {
  const char* charset_ptr = charset2;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute2(level - 1);
   }
  }
}


void permute3(int level) {
  const char* charset_ptr = charset3;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute3(level - 1);
   }
  }
}


void permute4(int level) {
  const char* charset_ptr = charset4;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute4(level - 1);
   }
  }
}


void permute5(int level) {
  const char* charset_ptr = charset5;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute5(level - 1);
   }
  }
}


void permute6(int level) {
  const char* charset_ptr = charset6;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute6(level - 1);
   }
  }
}


void permute7(int level) {
  const char* charset_ptr = charset7;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute7(level - 1);
   }
  }
}


void permute8(int level) {
  const char* charset_ptr = charset8;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute8(level - 1);
   }
  }
}


void permute9(int level) {
  const char* charset_ptr = charset9;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute9(level - 1);
   }
  }
}


void permute10(int level) {
  const char* charset_ptr = charset10;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute10(level - 1);
   }
  }
}


void permute11(int level) {
  const char* charset_ptr = charset11;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute11(level - 1);
   }
  }
}


void permute12(int level) {
  const char* charset_ptr = charset12;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute12(level - 1);
   }
  }
}


void permute13(int level) {
  const char* charset_ptr = charset13;
  if(level == -1){
    puts(buffer);
  }else {
   while(buffer[level]=*charset_ptr++) {
    permute13(level - 1);
   }
  }
}



int main(int argc, char **argv)
{

printf(" _    _ _ _____                _              \n");
printf("| |  | | /  __ \\              | |             \n");
printf("| |  | | | /  \\/_ __ ___  __ _| |_ ___  _ __  \n");
printf("| |/\\| | | |   | '__/ _ \\/ _` | __/ _ \\| '__| \n");
printf("\\  /\\  / | \\__/\\ | |  __/ (_| | || (_) | |    \n");
printf(" \\/  \\/|_|\\____/_|  \\___|\\__,_|\\__\\___/|_|    \n"); 
printf("\n");
  printf(":: Wordlist Creator v1.3 by @thelinuxchoice ::\n");


if (argc <= 1) {
printf("\n[*] Usage: ./wlcreator <password length>\n");
printf("[*] E.g.: ./wlcreator 5\n");
exit(1);

}
  printf("\n[*] Use lowercase letters? [y/n]: ");
  scanf("%s",&chr);
  printf("\n[*] Use CAP letters? [y/n]: ");
  scanf("%s",&cap);
  printf("\n[*] Use Numbers? [y/n]: ");
  scanf("%s",&num);
  printf("\n[*] Use Special Chars? [y/n]: ");
  scanf("%s",&spc);


   if ((!strcmp(chr, "n") && (!strcmp(cap, "n")) && (!strcmp(num, "n")) && (!strcmp(spc, "n"))))
{
   printf("[!] Wordlist not generated. Choose \"y\" for at least one option \n");
   exit(1);
}

  printf("\n[*] Use Pattern? [y/n]: ");
  scanf("%s",&apatt);

   if ((!strcmp(apatt, "y"))) {

    printf("\n1) pattern before string (E.g.: patternSTRING): \n");
    printf("2) pattern after string (E.g.: STRINGpattern): \n");
    printf("\n[*] Choose Pattern Mode: "); 
    scanf("%d",&patt);
    printf("[*] Type pattern (E.g.: admin): ");
    scanf("%s",&makepatt);  
}



//// y n n n
 if ((!strcmp(chr, "y") && (!strcmp(cap, "n")) && (!strcmp(num, "n")) && (!strcmp(spc, "n")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 26;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);

    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);

}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
}


/// n y n n 0



 if ((!strcmp(chr, "n") && (!strcmp(cap, "y")) && (!strcmp(num, "n")) && (!strcmp(spc, "n")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 26;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);

    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }

////
  int length;
  sscanf(argv[1], "%d", &length); 
  buffer[length]='\0';
  permute0(length - 1);
///  
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);

}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
}

/// y y n n 3
 if ((!strcmp(chr, "y") && (!strcmp(cap, "y")) && (!strcmp(num, "n")) && (!strcmp(spc, "n")))) {

int length1;
int char1= 52;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= char1;
        --length1;
}

int length2;
int length3;
int length4 =1;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+length4;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;

printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute3(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}
//// y y y n 5

 if ((!strcmp(chr, "y") && (!strcmp(cap, "y")) && (!strcmp(num, "y")) && (!strcmp(spc, "n")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 62;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute5(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}

/// y y y y 9

 if ((!strcmp(chr, "y") && (!strcmp(cap, "y")) && (!strcmp(num, "y")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 70;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");
    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute9(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}

/// n y y n = 10

 if ((!strcmp(chr, "n") && (!strcmp(cap, "y")) && (!strcmp(num, "y")) && (!strcmp(spc, "n")))) {

int length1;
long result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 36;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute10(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);

}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}


/// n y y y 12

 if ((!strcmp(chr, "n") && (!strcmp(cap, "y")) && (!strcmp(num, "y")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 44;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");


    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute12(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}

// ny ny 11

 if ((!strcmp(chr, "n") && (!strcmp(cap, "y")) && (!strcmp(num, "n")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 34;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute11(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
  
}
/// n n y n 1

 if ((!strcmp(chr, "n") && (!strcmp(cap, "n")) && (!strcmp(num, "y")) && (!strcmp(spc, "n")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 10;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");


    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute1(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}

/// n n y y 13

 if ((!strcmp(chr, "n") && (!strcmp(cap, "n")) && (!strcmp(num, "y")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 18;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute13(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}
/// n n n y 2

 if ((!strcmp(chr, "n") && (!strcmp(cap, "n")) && (!strcmp(num, "n")) && (!strcmp(spc, "y")))) {


int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 8;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute2(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}

/// y n y n 4

 if ((!strcmp(chr, "y") && (!strcmp(cap, "n")) && (!strcmp(num, "y")) && (!strcmp(spc, "n")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 36;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");

    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute4(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}

/// y n n y 6

 if ((!strcmp(chr, "y") && (!strcmp(cap, "n")) && (!strcmp(num, "n")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 34;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");


    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute6(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}

/// y n y y 7

 if ((!strcmp(chr, "y") && (!strcmp(cap, "n")) && (!strcmp(num, "y")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 44;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");


    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute7(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
    
}

/// y y n y 8

 if ((!strcmp(chr, "y") && (!strcmp(cap, "y")) && (!strcmp(num, "n")) && (!strcmp(spc, "y")))) {

int length1;
unsigned long long int result=1;
long double total;
    sscanf(argv[1], "%d", &length1); 

  while (length1 != 0)
{
        result *= 60;
        --length1;
}

int length2;
int length3;
float totalm;
float totalg;
float totalt;
    sscanf(argv[1], "%d", &length2); 
length3=length2+1;
total = result*length3;
totalm=total/(float)1048576;
totalg=total/(float)1073741824;
totalt=total/(float)1099511627776;
printf("\n[::] Total words:%llu\n",result);
printf("\n[::] Size in:\n");
printf("\nMB:%.2f\n",totalm);
printf("\nGB:%.2f\n",totalg);
printf("\nTB:%.2f\n",totalt);
    printf("\n[*] Continue? [y/n]: "); 
    scanf("%s",&cont);  
   if ((!strcmp(cont, "y"))) {

    printf("\n[*] Generating WordList...(It can take a long time)\n");


    remove("wordlist.txt");
    setvbuf(stdout, NULL, _IONBF, 0);
    int out = open("wordlist.txt", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == out) { perror("opening wordlist.txt"); return 255; }

    int err = open("cerr.log", O_RDWR|O_CREAT|O_APPEND, 0600);
    if (-1 == err) { perror("opening cerr.log"); return 255; }

    int save_out = dup(fileno(stdout));
    int save_err = dup(fileno(stderr));

    if (-1 == dup2(out, fileno(stdout))) { perror("cannot redirect stdout"); return 255; }
    if (-1 == dup2(err, fileno(stderr))) { perror("cannot redirect stderr"); return 255; }
/////
    int length;
    sscanf(argv[1], "%d", &length); 
    buffer[length]='\0';
    permute8(length - 1);
///////
    fflush(stdout); close(out);
    fflush(stderr); close(err);

    dup2(save_out, fileno(stdout));
    dup2(save_err, fileno(stderr));

    close(save_out);
    close(save_err);
}
   if ((!strcmp(cont, "n"))) {
exit(1);
}
  
  
}


  if ( patt == 1) {
    FILE *fr, *fw;
    char buffer[10000];
    fr = fopen("wordlist.txt","rt");
    if (fr == NULL) {
        printf("Error opening input file\n");
        return 1;
    }
    fw = fopen("wordlistp1.txt","wt");
    if (fw==NULL) {
        printf("Error opening output file\n");
        fclose (fr);
        return 1;
    }
    while (fgets(buffer, 10000, fr) != NULL) {
        buffer [ strcspn(buffer, "\r\n") ] = 0;   // remove trailing newline etc
        fprintf(fw, "%s%s\n", makepatt,buffer);
    }
    fclose(fw);
    fclose(fr);
    remove("wordlist.txt");
    printf("\n[*] Saved: wordlistp1.txt\n");
   

}
  else if (patt == 2) {

    FILE *fr, *fw;
    char buffer[10000];
    fr = fopen("wordlist.txt","rt");
    if (fr == NULL) {
        printf("Error opening input file\n");
        return 1;
    }
    fw = fopen("wordlistp2.txt","wt");
    if (fw==NULL) {
        printf("Error opening output file\n");
        fclose (fr);
        return 1;
    }
    while (fgets(buffer, 10000, fr) != NULL) {
        buffer [ strcspn(buffer, "\r\n") ] = 0;   // remove trailing newline etc
        fprintf(fw, "%s%s\n", buffer,makepatt);
    }
    fclose(fw);
    fclose(fr);
    remove("wordlist.txt");
    printf("\n[*] Saved: wordlistp2.txt\n");



}
 
   if ((!strcmp(apatt, "n"))) {

  printf("\n[*] Saved: wordlist.txt\n");
}
 

  return 0;
}
