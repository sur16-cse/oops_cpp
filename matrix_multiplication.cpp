typedef struct{int data[10][10];}mat;
typedef struct{int data[i][10];}vecRow;
typedef struct{int data[10][i];}vecCol;
void multiply_M_M(mat a,mat b,mat *c){}
void multiply_M_VC(mat a,vecCol b,vecCol *c){}
void multiply_VR_M(vecRow a,mat b,vecRow *c){}
void multiply_VC_VR(vecCol a,vecRow b,mat *c){}
void multiply_VR_VC(vecRow a,vecCol b,mat *c){}
int main(){
    mat m1,m2,rm;
    vecRow rv,rrv
}