#ifdef openg
#include "Key_down.cpp"
struct TheEnd{
	char sky[16][16];
	int n,m;
	int health;
	inline void The_end(){
		mt19937 mt;
		n=12,m=12;
		__pr("您确定要出发吗？0:毅然前行 1:裹足不前\n");
		int t;
		cin>>t;
		health=5;
		while(t!=0 and t!=1){
			__pr("again!\n"); 
			cin>>t;
		}
		if(t==1) return;
		__pr("按下W、A、S、D键移动！\n");
		system("pause");
		system("pause");
		system("cls");
		{
			__pr("每4w钱可以多买一条命。请问您要买几条？\n");
			__pr("您现在有");
			cout<<player.money<<"元\n";
			int F;cin>>F;
			for(;40000*F>player.money;){
				cout<<"您的钱好像不够。。。。\n";
				cin>>F;
			}
			cout<<"OK\n";
			health+=F;
			player.money-=F*40000; 
		}
		clock_t stt,lst;
		lst=clock();
		stt=clock();
		int x=7,y=5;
		int i,j;
		for(i=0;i<439;++i) mt();
		for(i=0;i<n;++i) for(j=0;j<m;++j) sky[i][j]='.';
		sky[x][y]='@';
		vector<pair<int,int> > v;
		v.clear();
		while((clock()-stt)/CLOCKS_PER_SEC<36){
			system("cls");
			sky[x][y]='.';
			if(KEY_DOWN('W')) --x,x=max(0,x);
			if(KEY_DOWN('A')) --y,y=max(0,y);
			if(KEY_DOWN('S')) ++x,x=min(x,n-1);
			if(KEY_DOWN('D')) ++y,y=min(y,m-1);
			sky[x][y]='@';
			if((clock()-stt)/CLOCKS_PER_SEC<12){
				if(mt()%23<=2){
					int x=mt()%m;sky[0][x]='E';
					v.push_back({0,x});
				}
			}else if((clock()-stt)/CLOCKS_PER_SEC<24){
				if(mt()%23<=4){
					int x=mt()%m;sky[0][x]='E';
					v.push_back({0,x});
				}
			}else{
				if(mt()%23<=7){
					int x=mt()%m;sky[0][x]='E';
					v.push_back({0,x});
				}
			}
			cout<<"Health:"<<health<<endl;
			for(i=0;i<n;++i,cout<<endl) for(j=0;j<m;++j) cout<<sky[i][j]<<' ';
			if(clock()-lst>=2){
				lst=clock();
				for(i=0;i<v.size();++i){
					if(v[i].first==n){
						v.erase(v.begin()+i);
						--i;
						continue;
					}
					sky[v[i].first][v[i].second]='.';
					if(sky[v[i].first+1][v[i].second]=='@'){
						cout<<"LOSE ONE HEALTH!\n";
						--health;
					}
					sky[v[i].first+1][v[i].second]='E';
					++v[i].first;
				}
				if(health<=0){
					system("cls");
					__pr("对不起，你输了\n");
					return;
				}			
			}
			Sleep(16);
		}
		cout<<"恭喜，你赢了！！！！！\n";
		cout<<"小程序一枚送上:\n";
		freopen("else.cpp","r",stdin);
		string s;
		while(getline(cin,s)) cout<<s<<endl;
		Sleep(5000);
		system("pause");
		exit(0);
	}
}Theend;

#endif 
