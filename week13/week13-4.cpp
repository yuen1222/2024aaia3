int main() {
    vector<int>A,B;
    int a,b;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
        ans+=abs(A[i]-B[i]);
    }
    cout<<"���׬O: "<<ans;
    ans=0;
    for(int a:A){
        for(int b:B){
            if(a==b)ans+=b;
        }
    }
    cout<<"�s�����׬O: "<<ans;
}
