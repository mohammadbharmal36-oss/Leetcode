class ProductOfNumbers {
public:
    vector<int> pr;
    long long p=1;
    ProductOfNumbers() {  
    }
    void add(int num) {
        if(num==0){
            pr.clear();
            p=1;
        }
        else{
        p*=num;
        pr.push_back(p);
        } 
    }
    int getProduct(int k) {
    if(k>pr.size()){
        return 0;
       }
    else if(k==pr.size()){
        return (int)p;
       }
    return (int)p/pr[pr.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */