//#include <iostream>
//#include <stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//template<class V ,class W , bool IsDirect = false >
//class Graph
//{
//	/* 邻接矩阵，方阵 */
//
//private:
//	//顶点集合
//	vector <V> m_v;//V 值
//
//	//边的集合
//	vector<vector<W> > m_edges; //W  权值   ， IsDirect  是什么图
//public:
//	Graph(const V * v, size_t n)
//	{
//
//		//m_v.resize(n);
//		/* 本质是通过增加或者删除vector里面的元素来实现的，会增加有效数据的长度 */
//		for (int i=0;i<n;++i)
//		{
//			m_v.push_back(v[i]);
//		}
//		m_edges.resize(n);
//		for (int i=0;i<n;++i)
//		{
//			
//			m_edges[i].resize(n ,W());
//		}
//	}
//	size_t GetVertexIndex(const V & v)
//	{
//		for (int i=0;i<m_edges.size();++i)
//		{
//			if (m_v[i]==v)
//			{
//				return i;
//			}
//		}
//		throw invalid_argument("非法的顶点");
//	}
//	void AddEndge(const V & src, const V & dst, const W & w )
//	{
//		size_t srcindex = GetVertexIndex(src);
//		size_t desindex = GetVertexIndex(dst);
//
//		m_edges[srcindex][desindex] = w;
//		if (IsDirect==false)
//		{
//			m_edges[desindex][srcindex] = w;
//
//		}
//
//	}
//	void GFS(const V & val)
//	{
//		queue<int> qu;
//		vector<bool> flag(m_v.size(), false);
//		int ret = GetVertexIndex(val);
//
//		qu.push(ret);
//
//		while (!qu.empty())
//		{
//			int index = qu.front();
//			//printf("[%d,%s]", qu.front(), m_v[qu.front()]);
//			/* 应对成环的情况 */
//			if (flag[index]==false)
//			{
//				cout << qu.front() << m_v[index].c_str() << "->";
//			}
//			flag[index] = true;
//
//			qu.pop();
//
//			//将我的朋友入队
//			for (int i=0;i<m_v.size();++i)
//			{
//				if (m_edges[index][i]!=0 && flag[i]==false)
//				{
//					qu.push(i);
//
//				}
//			}
//		}
//
//	}
//
//	void _DFS(int i, vector<bool> & arr)
//	{
//		//&  使用递归的时候应该注意的是，当递归参数要在整个程序中保持最新值的时候，
//		//参数应该传引用，或者指针，因为局部变量的话，在函数体出栈的时候，会更新成
//		//本次栈中的局部变量，产生与预期不符的结果
//
//		cout << i << m_v[i].c_str() << "->";
//		arr[i] = true;
//
//		for (int j = 0; j < m_v.size(); ++j)
//		{
//			if (m_edges[i][j]!=0 && arr[j]==false)
//			{
//			   _DFS(j, arr);//此处没有return 因为函数没有返回值，有return会产生意想不到的错误
//			}//for循环的终止条件作为递归的终止条件。
//		}
//	}
//	void DFS(const V & val)
//	{
//		int ret = GetVertexIndex(val);
//		vector<bool> flag(m_v.size(), false);
//
//		_DFS(ret, flag);
//	}
//
//};
//int main()
//{
//	string str[] = { "lixuhui","zouzixuan","liruzhen","chengyan" };
//	Graph<string, int> socialGraph(str, sizeof(str) / sizeof(string));
//	socialGraph.AddEndge("liruzhen", "zouzixuan", 100);
//	socialGraph.AddEndge("lixuhui", "zouzixuan", 90);
//	socialGraph.AddEndge("lixuhui", "chengyan", 90);
//	socialGraph.AddEndge("lixuhui", "liruzhen", 90);
//
//	socialGraph.GFS("zouzixuan");
//	//socialGraph.DFS("zouzixuan");
//	system("pause"); 
//	return 0;
//}