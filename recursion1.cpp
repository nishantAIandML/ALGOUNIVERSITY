#include <bits/stdc++.h>
using namespace std;
class Solution{
    /*void local_recur(int i,int j,int N){
        if(i>N/2||j<N/2+1){
            return;
        }
        cout<<i<<" "<<j<<endl;
        local_recur(i+1,j-1,N);
    }
    public:
    void recur(int N){
        int i=1;
        int j=N;
        local_recur(i,j,N);
    }*/
    /*public:
    int pow(int a,int b){
        if(b==0){return 1;}
        if(b==1){return a;}
        if(b%2==0){
            return pow(a,b/2)*pow(a,b/2);
        }
        return a*pow(a,b/2)*pow(a,b/2);
    }*/
    /*int recur(int n,int sum,vector<int>& coins,vector<vector<int>> &dp){
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(sum==0){
            return dp[n][sum]=1;
        }
        if(n==0){
            return dp[n][sum]=0;
        }
        int ans=recur(n-1,sum,coins,dp);
        if(sum-coins[n-1]>=0){
            ans+=recur(n,sum-coins[n-1],coins,dp);
        }
        return dp[n][sum]=ans;
    }
    public:
    void count(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,(vector<int>(sum+1,-1)));
        dp[n][sum]=recur(n,sum,coins,dp);
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        // return dp[n][sum];
    }*/
    /*public:
    int minCoins(vector<int> &coins, int sum) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j]=10001;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j>=coins[i-1]){
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        // return dp[n][sum];
    }*/
    /*public:
    bool isSubsetSum(vector<int>& arr, int sum) {
     int n=arr.size();
     vector<vector<int>>vec(n+1,vector<int>(sum+1,-1));

    }*/
    /*public:
    int maxSumSubarray(vector<int>&vec){
        int sum=0;
        int current_sum=0;
        for(int i=0;i<vec.size();i++){
            if(current_sum+vec[i]>0){
                current_sum+=vec[i];
                sum=max(sum,current_sum);
            }
            else{
                current_sum=0;
            }
        }
        return sum;
    }*/
    /*int recur(int n,int sum,vector<int>&arr,vector<vector<bool>>&dp){
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(n==0){
            return dp[n][sum]=0;
        }
        if(sum==0){
            return dp[n][sum]=1;
        }
        int ans=recur(n-1,sum,arr,dp);
        if(sum>=arr[n-1]){
            ans+=recur(n-1,sum-arr[n-1],arr,dp);
        }
        return dp[n][sum]=ans;
    }
    public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[n][sum]!=-1?true:false;
    }*/
    /*public:
    void subsets(int i,int n,vector<int> &vec,bool& ans,int target){
        if(i>n){
            int sum=0;
            for(int i:vec){
                sum+=i;
            }
            ans=(sum==target)|ans;
            return;
        }
        vec.push_back(i);
        subsets(i+1,n,vec,ans,target);
        vec.pop_back();
        subsets(i+1,n,vec,ans,target);
    }
    public:
    void generate(int n){
        vector<int>vec;
        bool ans=false;
        subsets(1,n,vec);
    }*/
    /*public:
    void permute(vector<int>&vec,int i,vector<vector<int>>& ans){
        if(i==vec.size()){
            ans.push_back(vec);
            return;
        }
        for(int start=i;i<vec.size();i++){
            swap(vec[i],vec[start]);
            permute(vec,start+1,ans);
            swap(vec[i],vec[start]);
        }
    }
    public:
    vector<vector<int>> countPer(vector<int>& vec){
        vector<vector<int>>ans;
        int n=vec.size();
        permute(vec,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }*/
    /*int recur(string& s1,string& s2){
        vector<vector<int>>dp(s1.length()+1,)
    }
    public:
    bool isInterleave(string& s1, string& s2, string& s3) {
        s1+=s2;

    }*/
    /*public:
    int circularKadane(vector<int>& vec){
        vector<int>dp(vec.size(),0);
        int total=vec[0];
        int ans=vec[0];
        dp[0]=vec[0];
        for(int i=1;i<vec.size();i++){
            dp[i]=max(vec[i],dp[i-1]+vec[i]);
            ans=max(ans,dp[i]);
            total+=vec[i];
    }
    vector<int>dp1(vec.size(),0);
    int min_sum=vec[0];
    dp1[0]=vec[0];
    for(int i=1;i<vec.size();i++){
        dp1[i]=min(vec[i],dp1[i-1]+vec[i]);
        min_sum=min(min_sum,dp1[i]);
    }
    ans=max(ans,total-min_sum);
    return ans;
    }*/
    /*public;
    int LIS(vector<int>& vec){
        int n=vec.size();
        vector<int>dp;
        dp.push_back(vec[0]);
        int l=1;
        for(int i=1;i<n;i++){
            int local_l;
            for(int j=0;j<i;j++){
                if(vec[i]>dp[j]){
                    local_l=dp.size();
                    l=max(local_l+1,l);
                    break;
                }
                else{
                    j--;
                }
            }
        }
    }*/
    /*int recur(string &s1,string &s2,int n,int m){
        if(n==0){
            return m;
        }
        if(m==0){
            return n;
        }
        if(s1[n-1]==s2[m-1]){
            return recur(s1,s2,n-1,m-1);
        }
        int a=recur(s1,s2,n,m-1);
        int b=recur(s1,s2,n,m-1);
        int c=recur(s1,s2,n-1,m-1);
        return 1+min(min(a,b),min(b,c));

    }*/
    /*public:
    string editDistance(string& s1, string& s2) {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=max(dp[i-1][j-1]+1,dp[i][j-1]);
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string ans="";
  int cnt=dp[n][m];
  for(int i=m;i>=1;i--){
    for(int j=n;j>=1;j--){
      if(dp[j][i]==cnt && dp[j-1][i-1]==cnt-1){
        ans+=s1[j-1];
        cnt--;
        break;
      }
    }
}
reverse(ans.begin(),ans.end());
        return ans;
    }*/
    /*public:
    int countSubstr(string& s, int k) {
        int i=0;
        int j=0;
        int cnt=0;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[j++]++;
            if(mp.size()==k){
                cnt++;
            }
            while(mp.size()>k){
                i++;
            }
        }
        while(mp.size()==k){
            cnt++;
            i++;
        }
        return cnt;
    }*/
    /*bool recur(vector<int>&vec,int target,int n,vector<vector<int>>& dp){
        if(target==0){
            // dp[n][target]=1;
            return true;
        }
        if(n==0){
            // dp[n][target]=0;
            return false;
        }
        if(dp[n][target]!=-1){
            return true;
        }
        bool ans=recur(vec,target,n-1,dp);
        if(target>=vec[n-1]){
            ans=ans||recur(vec,target-vec[n-1],n-1,dp);
        }
        return ans;
    }
    public:
    void jumpP(vector<int>&vec,int target){
        int n=vec.size();
        sort(vec.begin(),vec.end());
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        if(recur(vec,target,n,dp)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    }*/
    /*public:
    void generate(int i,int e,int n,string &s){
        if(i==n && e==n){
            cout<<s<<endl;
            return;
        }
        if(i<n){-
            s.push_back('{');
            generate(i+1,e,n,s);
            s.pop_back();
        }
        if(e<n && e<i){
            s+='}';
            generate(i,e+1,n,s);
            s.pop_back();
        }
    }*/
    /*void recur(int i,string &s,vector<string>& ans){
        if(i==s.length()-1){
            ans.push_back(s);
            return;
        }
        for(int k=i;k<s.length();k++){
            swap(s[i],s[k]);
            recur(i+1,s,ans);
            swap(s[i],s[k]);
        }
    }
    public:
    vector<string> findPermutation(string &s) {
        vector<string>ans;
        int i=0;
        recur(i,s,ans);
        return ans;
    }*/
    /*int recur(vector<int>& arr,int n,vector<int>& dp){
        if(dp[n]!=100000){
            return dp[n];
        }
        for(int i=n-1;i>=0;i--){
            if(i+arr[i]>=n){   
                dp[n]=min(dp[n],1+recur(arr,i,dp));
            }
        }
        return dp[n];
    }
    public:
    void minJumps(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,100000);
        dp[0]=0;
        for(int i=n-2;i>=0;i--){
            if(i+arr[i]>=n-1){
            dp[n-1]=min(dp[n-1],1+recur(arr,i,dp));
            }
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        if(dp[n-1]==INT_MAX){
            cout<<"Can't climb\n";
        }
        else{
            cout<<"climb\n";
        }
        // return dp[n-1];
    }*/
    /*public:
    int longestStringChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](string &a,string& b){
            return a.length()<b.length();
        });
        
    }*/

    /*public:
    int maxProfit(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        recur()
    }*/
/*public:
int min_entropy(vector<int>&vec,int i,int n,vector<int>&pre_sum,vector<vector<int>>&dp){
  if(n==1||i==n){
    return dp[i][n]=0;
  }
  if(dp[i][n]!=-1){
    return dp[i][n];
  }
  int ans=INT_MAX;
  for(int ind=1;ind<n-1;ind++){
    int l=min_entropy(vec,i,ind,pre_sum,dp);
    int r=min_entropy(vec,ind+1,pre_sum,dp);
    ans=min(l+r+c,ans);
  }
  return dp[i][n]=ans;
}*/
/*public:
int recur(int n,int l,vector<int>&price,vector<vector<int>>&dp){
    if(n>l||l==0){
        return 0;
    }
    if(dp[n][l]!=-1){
        return dp[n][l];
    }
    int ans2=price[n-1]+recur(n,l-n,price,dp);
    int ans1=recur(n+1,l,price,dp);
    int ans=max(ans1,ans2);
    return dp[n][l]=ans;
}
public:
    int cutRod(vector<int> &price) {
        int n=price.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int ans=recur(1,n,price,dp);
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout<<dp[i][j]<<"    ";
            }
            cout<<endl;
        }
        return ans;
    }*/
    /*int recur(int n,int m,string &s1,string &s2,vector<vector<int>>&dp){
        if(n==0){
            return dp[n][m]=m;
        }
        if(m==0){
            return dp[n][m]=n;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s1[n-1]==s2[m-1]){
            return dp[n][m]=recur(n-1,m-1,s1,s2,dp);
        }
        int ans1=1+recur(n-1,m,s1,s2,dp);
        int ans2=1+recur(n,m-1,s1,s2,dp);
        int ans=min(ans1,ans2);
        return dp[n][m]=ans;
    }
    public:
    int minOperations(string &s1, string &s2) {
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=recur(n,m,s1,s2,dp);
        return ans;
    }*/
    /*int recur(int m,int x,int n,vector<int>&dp){
        if(x==0){
            if(n==0){
                return 1;
            }
            return 0;
        }
        if(x>0 && n==0){
            return 0;
        }
        if(dp[x]!=-1){
            return dp[x];
        }
        int ans=0;
        for(int i=1;i<=m;i++){
            if(x>=i){
                ans+=recur(m,x-i,n-1,dp);
            }
        }
        return dp[x]=ans;
    }
  public:
    int noOfWays(int m, int n, int x) {
        vector<int>dp(x+1,-1);
        for(int i=1;i<n;i++){
            dp[i]=0;
        }
        int ans=recur(m,x,n,dp);
        for(int i=1;i<=x;i++){
            cout<<dp[i]<<" ";
        }
        return ans;
    }*/
    public:
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
        unordered_map<int,int>mp;
        long long int cnt=0;
        mp[0]=1;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]=-1;
            }
            pre_sum+=arr[i];
            if(mp.find(pre_sum)!=mp.end()){
                cnt+=mp[pre_sum];
            }
            mp[pre_sum]++;
        }
        return cnt;
    }
};
int main(){
    Solution s;
    int vec[]={0,1,1,0,0};
    cout<<s.countSubarrWithEqualZeroAndOne(vec,5);
    // cout<<s.noOfWays(6,2,2);
    // string s1="heap";
    // string s2="pea";
    // cout<<s.minOperations(s1,s2);
    // vector<int>price={1, 5, 8, 9, 10, 17, 17, 20};
    // int n=price.size();
    // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    // cout<<s.cutRod(price);
    /*priority_queue<pair<int,int>>h;
    h.push({3,2});
    h.push({4,3});
    while(h.size()!=0){
        cout<<"{"<<h.top().first<<","<<h.top().second<<"}"<<endl;
        h.pop();
    }*/
    // h.push(2);
    // h.push(8);
    // while(h.size()!=0){
        // cout<<h.top();
        // h.pop();
        // cout<<h.top();
    /*int n;
    cin>>n;
    vector<int>vec(n,0);
    vector<int>pre_sum(n+1,0);
    for(int i=0;i<n;i++){
    cin>>vec[i];
    pre_sum[i+1]=pre_sum[i]+vec[i];
  }
  vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
  cout<<s.min_entropy(vec,1,n,pre_sum,dp)<<endl;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
    // vector<int>vec={1,2,4};
    // cout<<lower_bound(vec.begin(),vec.end(),3)-vec.begin();
    // vector<string>words={"ba", "b", "a", "bca", "bda", "bdca"};
    // s.longestStringChain(words);*/
}