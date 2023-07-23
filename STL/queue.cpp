void explainQueue(){
    queue<int> q;
    q.push(1);//{1}
    q.push(2); //{1,2}
    q.emplace(4);//{1,2,4}

    q.back() += 5
    cout<<q.back();
    cout<<q.front();
    cout<<q.front();
}