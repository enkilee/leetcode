/*
 * @Author: your name
 * @Date: 2020-05-01 10:49:42
 * @LastEditTime: 2020-05-01 11:02:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \leecode\no23.cpp
 * 

合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。

输入:
[
  1->4->5,
  1->3->4,
  2->6
]
输出: 1->1->2->3->4->4->5->6

 */

#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <map>
#include <algorithm>
using namespace std;

struct ListNode 
{
    int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) 
{
    int len=lists.length();
        
}
int main()
{
   
    return 0;
}