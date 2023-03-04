// Find negative integer in every window size k --- GFg 
/*
vector<long long> printFirstnegativeInteger(long long int A[], long long int N, long long  int K){
    deque<long long int> dq;
    vector<long long> ans;

    //Process first window of k size

    for(int i= 0; i< K; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }

    // Store ans for first k size window
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    // Process for remainning part

    for(int i =K;i<N; i++){
        //removal
        if(!dq.empty() && dq.front()>= K){
            dq.pop_front();
        }
        // addition
        if(A[i] <0){
            dq.push_back(i);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}

*/