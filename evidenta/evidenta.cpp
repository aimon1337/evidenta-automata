#include <bits/stdc++.h>
using namespace std;
ifstream finm("membri.txt");
ifstream fin1("war1.txt");
ifstream fin2("war2.txt");
ifstream fin3("war3.txt");
ifstream fin4("war4.txt");
ifstream fin5("war5.txt");
ifstream fin6("war6.txt");
ifstream fin7("war7.txt");
ifstream fin8("war8.txt");
ofstream fout("evidenta.txt");
struct membrii{
	string nume;
	int prezent;
}ev[21];
struct war1{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v1[21];
struct war2{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v2[21];
struct war3{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v3[21];
struct war4{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v4[21];
struct war5{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v5[21];
struct war6{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v6[21];
struct war7{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v7[21];
struct war8{
	string nume, time;
	int kills, deaths, assists;
	float score;
}v8[21];

int main(){
	int i,poz, nr_banati, nr_membri, nr_waruri;
	cout<<"Numar membri: "; cin>>nr_membri;
	cout<<"Numar waruri: "; cin>>nr_waruri;
	for(i=1;i<=nr_membri;++i){
		finm>>ev[i].nume;
		ev[i].prezent=0;
	}
	int j;
	switch(nr_waruri){
		case 8:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin4>>v4[poz].nume>>v4[poz].score>>v4[poz].kills>>v4[poz].deaths>>v4[poz].assists>>v4[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v4[poz].nume == ev[i].nume){
						if(v4[poz].time>="2")
							ev[i].prezent++;
						else
							if(v4[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v4[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v4[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin5>>v5[poz].nume>>v5[poz].score>>v5[poz].kills>>v5[poz].deaths>>v5[poz].assists>>v5[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v5[poz].nume == ev[i].nume){
						if(v5[poz].time>="2")
							ev[i].prezent++;
						else
							if(v5[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v5[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v5[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin6>>v6[poz].nume>>v6[poz].score>>v6[poz].kills>>v6[poz].deaths>>v6[poz].assists>>v6[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v6[poz].nume == ev[i].nume){
						if(v6[poz].time>="2")
							ev[i].prezent++;
						else
							if(v6[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v6[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v6[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin7>>v7[poz].nume>>v7[poz].score>>v7[poz].kills>>v7[poz].deaths>>v7[poz].assists>>v7[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v7[poz].nume == ev[i].nume){
						if(v7[poz].time>="2")
							ev[i].prezent++;
						else
							if(v7[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v7[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v7[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin8>>v8[poz].nume>>v8[poz].score>>v8[poz].kills>>v8[poz].deaths>>v8[poz].assists>>v8[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v8[poz].nume == ev[i].nume){
						if(v8[poz].time>="2")
							ev[i].prezent++;
						else
							if(v8[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v8[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v8[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
		case 7:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin4>>v4[poz].nume>>v4[poz].score>>v4[poz].kills>>v4[poz].deaths>>v4[poz].assists>>v4[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v4[poz].nume == ev[i].nume){
						if(v4[poz].time>="2")
							ev[i].prezent++;
						else
							if(v4[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v4[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v4[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin5>>v5[poz].nume>>v5[poz].score>>v5[poz].kills>>v5[poz].deaths>>v5[poz].assists>>v5[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v5[poz].nume == ev[i].nume){
						if(v5[poz].time>="2")
							ev[i].prezent++;
						else
							if(v5[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v5[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v5[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin6>>v6[poz].nume>>v6[poz].score>>v6[poz].kills>>v6[poz].deaths>>v6[poz].assists>>v6[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v6[poz].nume == ev[i].nume){
						if(v6[poz].time>="2")
							ev[i].prezent++;
						else
							if(v6[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v6[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v6[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin7>>v7[poz].nume>>v7[poz].score>>v7[poz].kills>>v7[poz].deaths>>v7[poz].assists>>v7[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v7[poz].nume == ev[i].nume){
						if(v7[poz].time>="2")
							ev[i].prezent++;
						else
							if(v7[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v7[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v7[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
			case 6:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin4>>v4[poz].nume>>v4[poz].score>>v4[poz].kills>>v4[poz].deaths>>v4[poz].assists>>v4[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v4[poz].nume == ev[i].nume){
						if(v4[poz].time>="2")
							ev[i].prezent++;
						else
							if(v4[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v4[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v4[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin5>>v5[poz].nume>>v5[poz].score>>v5[poz].kills>>v5[poz].deaths>>v5[poz].assists>>v5[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v5[poz].nume == ev[i].nume){
						if(v5[poz].time>="2")
							ev[i].prezent++;
						else
							if(v5[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v5[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v5[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin6>>v6[poz].nume>>v6[poz].score>>v6[poz].kills>>v6[poz].deaths>>v6[poz].assists>>v6[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v6[poz].nume == ev[i].nume){
						if(v6[poz].time>="2")
							ev[i].prezent++;
						else
							if(v6[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v6[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v6[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
		case 5:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin4>>v4[poz].nume>>v4[poz].score>>v4[poz].kills>>v4[poz].deaths>>v4[poz].assists>>v4[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v4[poz].nume == ev[i].nume){
						if(v4[poz].time>="2")
							ev[i].prezent++;
						else
							if(v4[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v4[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v4[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin5>>v5[poz].nume>>v5[poz].score>>v5[poz].kills>>v5[poz].deaths>>v5[poz].assists>>v5[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v5[poz].nume == ev[i].nume){
						if(v5[poz].time>="2")
							ev[i].prezent++;
						else
							if(v5[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v5[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v5[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
		case 4:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin4>>v4[poz].nume>>v4[poz].score>>v4[poz].kills>>v4[poz].deaths>>v4[poz].assists>>v4[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v4[poz].nume == ev[i].nume){
						if(v4[poz].time>="2")
							ev[i].prezent++;
						else
							if(v4[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v4[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v4[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
		case 3:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin3>>v3[poz].nume>>v3[poz].score>>v3[poz].kills>>v3[poz].deaths>>v3[poz].assists>>v3[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v3[poz].nume == ev[i].nume){
						if(v3[poz].time>="2")
							ev[i].prezent++;
						else
							if(v3[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v3[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v3[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
		case 2:
			poz=1;
			while(fin1>>v1[poz].nume>>v1[poz].score>>v1[poz].kills>>v1[poz].deaths>>v1[poz].assists>>v1[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v1[poz].nume == ev[i].nume){
						if(v1[poz].time>="2")
							ev[i].prezent++;
						else
							if(v1[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v1[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v1[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			poz=1;
			while(fin2>>v2[poz].nume>>v2[poz].score>>v2[poz].kills>>v2[poz].deaths>>v2[poz].assists>>v2[poz].time){
				for(i=1;i<=nr_membri;++i){
					if(v2[poz].nume == ev[i].nume){
						if(v2[poz].time>="2")
							ev[i].prezent++;
						else
							if(v2[poz].kills != 0)
								ev[i].prezent++;
							else
								if(v2[poz].deaths != 0)
									ev[i].prezent++;
								else
									if(v2[poz].assists != 0)
										ev[i].prezent++;
					}
				}
				poz++;
			}
			break;
	}
	int war_oblig;
	war_oblig=nr_waruri/2;
	for(i=1;i<=nr_membri;++i){
			if(ev[i].prezent < war_oblig)
				fout<<ev[i].nume<<" ABSENT - "<<ev[i].prezent<<"/"<<nr_waruri<<endl;
		}
	return 0;
}
