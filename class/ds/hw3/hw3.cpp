//22213484 최은정
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Nd{
public:
    int val;
    Nd *lft, *rgt;
    Nd(int num){
        val=num;
        lft=nullptr;
        rgt=nullptr;
    }
};
int find_hd(int *ino[],int *strt, int *ed, int *hd){
    for(int i=(*strt);i<(*ed);i++){
        if((*ino[i])==(*hd))
            return i;
    }
    return -1;
}


Nd* div_lr(int *pre[], int *ino[],int *prehd, int strt, int ed){
    int re_arra[100];
    //int head=(*prehd);
    if(strt<ed){
        Nd* root = new Nd((*pre[*(prehd)]));
       prehd++;
        int hd=find_hd(ino,pre[(*prehd)-1],strt,ed);
        root->lft=div_lr(pre,ino,prehd,strt,(*prehd)-1);
        root->rgt=div_lr(pre,ino,prehd,(*prehd)+1,ed);

        return root;
    }
    else return nullptr;
}
int making_tree(int *ino[],int *pre, int *lim_ord){
    int n= *(lim_ord);
    int prehd=0;
    Nd* root = div_lr(*pre[],*ino[],(*prehd),&0,n-1);
}
int making_post(Nd* root){
    if(root==nullptr) return;
    making_post(root->lft);
    making_post(root->rgt);
    cout<<"Postorder: "<<root->val<<" ";
    
}
int main(){
    string name, amount, inp;
    ifstream rd;

    cout<<"enter the txtname: ";
    cin>>name;
    rd.open(name, ifstream::in);
    getline(rd, amount);
    int amo = stoi(amount);
    cout<<amo;

    int preO[100];
    int inO[100];
    getline(rd,inp);
    for(int i=0;i<amo;i++){ 
        int inp_int=stoi(inp);
        int pre_inp = inp_int/(10*(amo-(i+1)));
        inp_int=inp_int-(pre_inp*(10*(amo-(i+1))));
        preO[i]=pre_inp;
    }
    getline(rd,inp);
    for(int i=0;i<amo;i++){
        int inp_int=stoi(inp);
        int ino_inp = inp_int/(10*(amo-(i+1)));
        inp_int=inp_int-(ino_inp*(10*(amo-(i+1))));
        inO[i]=ino_inp;
    }

    Nd* root = making_tree(preO[], inO[]);
    making_post(root);
    return 0;


}
