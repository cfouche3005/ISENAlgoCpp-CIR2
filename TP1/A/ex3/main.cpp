#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>


int max(int n){
  return n;
}

int max(int m,int n){
    if(n<=m){
      return m;
    }else{
      return n;
    }
}

int max(int m, int n, int r){
    if(n<=m){
      if(r<=m){
        return m;
      }else{
        return r;
      }
    }else{
      if(r<=n){
        return n;
      }else{
        return r;
      }
    }
}

int main(){
  std::cout << "Max = " << max(1) << std::endl;
  std::cout << "Max = " << max(1,2) << std::endl;
  std::cout << "Max = " << max(1,2,3) << std::endl;

}