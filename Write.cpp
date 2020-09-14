#ifdef openg
inline void cd(){
	mt19937 mt;
	for(int i=0;i<1982473;++i) mt(); 
	cout<<"ÇëÊäÈëÄãÒª´æµÄµµµÄÃû×Ö(Ó¢ÎÄ)\n";
	string s,t;
	cin>>s;
	cout<<"ÃÜÂë£º";
	cin>>t;
	ofstream out;
	out.open((s+".zrmtrl").c_str());
	out<<t,out<<endl;
	out<<player.level<<" "<<player.exp<<" "<<player.ishh<<" "<<player.isqj<<" "<<player.money<<" "<<openmh<<' '<<opencp<<' '<<kswj<<' ';
	for(int i=0;i<player.level+player.exp+player.ishh+player.isqj+player.ishh+openmh+opencp+kswj;++i) mt(),mt(),mt();
	for(int i=0;i<6;++i){
		out<<player.a[i]<<" ";
		for(int j=0;j<player.a[i];++j) mt(),mt(),mt(),mt(),mt();
	}
	for(int i=0;i<6;++i){
		out<<player.add[i]<<' ';
		for(int j=0;j<player.add[i];++j) mt(),mt();
	}
	out<<mt()<<endl;
	out.close();
	cout<<"\n\t\t\t\t\tOK\n";
}
#endif
