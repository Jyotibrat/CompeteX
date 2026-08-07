#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Element {
    int val;
    int type;
};

int main(){
    int t,n,m,x,y,temp_x,temp_y,c;
    vector<int> a,b;
    cin >> t;
    while(t--){
        cin >> n >> m >> x >> y;
        a.resize(x);
        b.resize(y);
        for(auto i{-1}; ++i<x;) cin >> a[i];
        for(auto i{-1}; ++i<y;) cin >> b[i];

        vector<Element> elements;
        elements.reserve(x+y);
        temp_x=x-1, temp_y=y-1;

        while (temp_x>=0 || temp_y>=0){
            if(temp_x>=0 && temp_y>=0){
                if(a[temp_x] > b[temp_y]){
                    elements.push_back({a[temp_x], 1});
                    temp_x--;
                } else if (a[temp_x] < b[temp_y]){
                    elements.push_back({b[temp_y], 2});
                    temp_y--;
                } else{
                    elements.push_back({a[temp_x], 3});
                    temp_x--;
                    temp_y--;
                }
            } else if (temp_x>=0){
                elements.push_back({a[temp_x], 1});
                temp_x--;
            } else{
                elements.push_back({b[temp_y], 2});
                temp_y--;
            }
        }

        long long ans_1{0}, ans_2{0};
        c=2;
        while (c!=0){
            if(c==2){
                long long sum{0};
                int t_1{0}, t_2{0}, t_3{0};
                for(auto& element:elements){
                    if(element.type==1){
                        if(t_1<n-1 && \
                            t_1+ t_2+ t_3 < n+m-1){
                                t_1++;
                                sum+=element.val;
                            }
                    }else if(element.type==2){
                        if(t_2<m && \
                            t_1+ t_2+ t_3 < n+m-1){
                                t_2++;
                                sum+=element.val;
                            }
                    }else{
                        if(t_1+t_2+t_3<n+m-1){
                            t_3++;
                            sum+=element.val;
                        }
                    }
                }
                ans_1=sum;
                c--;
                continue;
            }
            long long sum{0};
            int t_1{0}, t_2{0}, t_3{0};
            for(auto& element:elements){
                if(element.type==1){
                    if(t_1<n && \
                        t_1+ t_2+ t_3 < n-1+m){
                            t_1++;
                            sum+=element.val;
                        }
                }else if(element.type==2){
                    if(t_2<m-1 && \
                        t_1+ t_2+ t_3 < n-1+m){
                            t_2++;
                            sum+=element.val;
                        }
                }else{
                    if(t_1+t_2+t_3<n-1+m){
                        t_3++;
                        sum+=element.val;
                    }
                }
            }
            ans_2=sum;
            c--;
        }
        cout << max(ans_1, ans_2) << endl;
    }
    return 0;
}