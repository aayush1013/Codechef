#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool issafe(int row,int col,vector<string> board,int n)
{
   int duprow = row;
   int dupcol= col;

   while(col>=0 && row >= 0)
   {
      if(board[row][col]=='Q')
      return false;
      row--;
      col--;
   }

   row = duprow;
   col=dupcol;

   while(col>=0)
   {
      if(board[row][col]=='Q')
      return false;
      col--;
   }

   row=duprow;
   col=dupcol;

   while(row<n && col>=0)
   {
      if(board[row][col]=='Q')
      return false;
      row++;
      col--;
   }
   return true;
}

void solve(int col,vector<string> &board, vector<vector<string>> &ans,int n)
{
   if(col==n)
   {
      ans.push_back(board);
      return;
   }

   for(int row=0;row<n;row++)
   {
      if(issafe(row,col,board,n)){
         board[row][col]='Q';
         solve(col+1,board,ans,n);
         board[row][col]='.';
      }
   }
}

 vector<vector<string>> solveNQueens(int n)
 {
   vector<vector<string>> ans;
   vector<string> board(n);
   string s(n,'.');
   for(int i=0;i<n;i++)
   {
      board[i]=s;
   }
   solve(0,board,ans,n);
   return ans;
}


int main()
{
   int n=5;
   vector<vector<string>> ans = solveNQueens(n);
   for(auto i:ans){
      for(auto j:i){
         cout<<j<<" "<<endl;
      }
      cout<<endl;
   }
   return 0;
}