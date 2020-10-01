/*_____________________________________________________________________________________________________
|                                                                                                     |
|                                                                                                     |
|  "!!!!!!!!I    "!!!!!!!!!`          "i__<:         ,>__>:       ,!!!!!I,       l!!!!!!!!!,          |
|  f@@@$$$$$*'   r$$$$$@@@$+        ICW@$$$8m<     >O&$$$$&m~     c@@@$$@&dt.   ^M$$@@@@$$$u          |
|  r$$$#UUUUu.   ?UUUX*$$$WI       .q$$V  V$M^   "#$$$YX@$$W:    z$$$aUW$$$)   'vUUW$$$qUU[           |
|  j$$$              -8$$8_        'a$$$   wwm:   !@$$8  W$$$<    c$$$z J$$$u       q$$$1             |
|  j$$$MQQQv        _8$$B}          ?#$$$p)^      l@$$8  W$$$<    c$$$dn#$$a~       p$$$)             |
|  j$$$$@@@b       <W$$$(            "ra$$$#r`    l@$$8  W$$$<    c$$$$$$$%X'       p$$$)             |
|  j$$$m:::,      l*$$$t                 k$$$O'   l@$$8  W$$$<    c$$$O?b$$$/       p$$$)             |
|  j$$$          ;h$$$u            "M@@  I%$$$!   l@$$%  W$$$<    c$$$Y  U$$$c      p$$$)             |
|  r$$$Baaaam'   0$$$$aaaaa>       .0$$$kd$$$d`   `q$$$kb$$$b^    z$$$U   C$$$c     &$$$(             |
|  |aaao****w'   Caaaa*****>        `fq*88*px,     "rq*88#px,     jaaan   |aaaJ'    Caaa[             |
|  .'''''''''    ''''''''''            ^&&^           ^,,^        &&&&&    &&&&&    &&&&&             |  
|                                                                                                     |
|  ___________________________________________________________________________________________________|*/
#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(a[0]))
void printarray(int arr[],int len){for(int i=0;i<(len);i++){printf("%d",arr[i]);printf(",");}printf("\n");}
void swap(int* s1,int *s2){int ph = *s1;*s1 = *s2;*s2 = ph;}
void quicksort(int* arr,int s,int m){

int p = arr[m];int lp = s;int rp = m-1;
if((m-s)>1){
while(lp<=rp){
  if(arr[lp]>=p && arr[rp]<p){
    swap(&arr[lp],&arr[rp]);
    lp++;
    rp--;
  }else{
    if(arr[lp]<p){lp++;} 
    if(arr[rp]>=p){rp--;}     
  }
}
swap(&arr[rp+1],&arr[m]);
quicksort(arr,rp+2,m);
quicksort(arr,s,rp);
}else {
  if((m-s)==1){
    if(arr[s]>arr[m]){
      swap(&arr[m],&arr[s]);
    }
  }
}
}
void quicksortr(int* arr,int s,int m){

int p = arr[m];int lp = s;int rp = m-1;
if((m-s)>1){
while(lp<=rp){
  if(arr[lp]<=p && arr[rp]>p){
    swap(&arr[lp],&arr[rp]);
    lp++;
    rp--;
  }else{
    if(arr[lp]>p){lp++;} 
    if(arr[rp]<=p){rp--;}     
  }
}
swap(&arr[rp+1],&arr[m]);
quicksortr(arr,rp+2,m);
quicksortr(arr,s,rp);
}else {
  if((m-s)==1){
    if(arr[s]<arr[m]){
      swap(&arr[m],&arr[s]);
    }
  }
}
}
void sort(int* arr,int l){quicksort(arr,0,l-1);}
void sortreverse(int* arr,int l){quicksortr(arr,0,l-1);}
