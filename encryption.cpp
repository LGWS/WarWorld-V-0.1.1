#ifdef openg
inline void encrypt(string s){
	srand(time(NULL));
	char i;
	int j; 
	in.open((s+".paulzrm_is_jvruo").c_str());
	out.open(("~"+s+".paulzrm_jvruo").c_str());
	string ss;
	while(getline(in,ss)){
		for(int i=0;i<ss.size();++i) ss[i]=mc[ss[i]];
		out<<ss<<endl;
	}
	in.close();
	out.close();
	in.open(("~"+s+".paulzrm_jvruo").c_str());
	out.open((s+".paulzrm_is_jvruo").c_str());
	while(getline(in,ss)){
		out<<ss<<endl;
	}
	in.close();
	out.close();
}
#endif
