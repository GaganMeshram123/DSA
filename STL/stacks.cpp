void explainstack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(4);//{1,2,3,4}
    st.push(5);//if we are talking about the time and complexity it is bigo of 1 means it is constant 
    cout<<st.top();
    st.pop();//st looks like{3,2,1}
    cout<< st.top();
    cout<< st.size();//lifo is stack 
    cout<< st.empty();
    stack<int>st1,st2;
    st1.swap(size)
    }