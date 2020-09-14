#ifdef openg
inline void makemmb(string s){
	int i,j;
	out.open((s+".mmb").c_str());
	c.clear();
	vector<char> t;
	t.clear();
	for(i='0';i<='9';++i) c.push_back(i);
	for(i='A';i<='Z';++i) c.push_back(i);
	for(i='a';i<='z';++i) c.push_back(i);
	for(j=0;j<ss.size();++j) c.push_back(ss[j]);
	t=c;
	random_shuffle(c.begin(),c.end());
	random_shuffle(c.begin(),c.end());
	for(j=0;i<c.size();++i) for(int k=0;k<c.size();++k) if(rand()%3==0) swap(c[j],c[k]);
	for(j=0;j<t.size();++j) out<<t[j]<<' '<<c[j]<<endl;
	out.close();
}
#endif
