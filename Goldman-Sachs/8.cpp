class DataStream {
public:
    vector<int>vec;
    int value;
    int k;
    int count=0;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
        count=0;       
                
    }
    
    bool consec(int num) {
        if(num==value)count++;
        else {count=0; return false;}
        if(count>=k)return true;
        else return false;
        
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */