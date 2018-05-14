#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void) {
    filestat1();
    filestat2();
    tiletime1();
    filetime2();
    sizecmp();
    blcokcmp();
    datecmp();
    timecmp();
    return 0;
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(void) {

}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(void) {

}

//파일1의 시간정보를 가져오는 함수
void filetime1(void) {

}

//파일2의 시간정보를 가져오는 함수
void filetime2(void) {

}

//두 개의 파일 크기를 비교하는 함수
void sizecmp(void) {
    
    int cmp=(int)stat1.st_size-(int)stat2.st_size;
    printf("size compare\n");
    if(stat1.st_size > stat2.st_size){  printf("text1 is bigger\n");}
    if(stat1.st_size == stat2.st_size){  printf("sizes are equal\n");}
    if(stat1.st_size < stat2.st_size){  printf("text2 is bigger\n");}
    return ;
}


//두 개의 파일 블락 수를 비교하는 함수
void blockcmp(void) {
    int cmp=0;
    
    cmp = (int)stat1.st_blocks - (int)stat2.st_blocks;
    
    printf("block compare\n");
   // printf("%d /// %d\n",(int)stat1.st_blocks , (int)stat2.st_blocks );
    if(cmp>0){  printf("text1 is bigger\n");}
    if(cmp==0){  printf("block are equal\n");}
    if(cmp<0){  printf("text2 is bigger");}
    return ;
}


//두 개의 파일 수정 날짜를 비교하는 함수
void datecmp(void) {

}

//두 개의 파일 수정 시간을 비교하는 함수
void timecmp(void) {

}
