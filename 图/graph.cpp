//#include <iostream>
//#include <stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//template<class V ,class W , bool IsDirect = false >
//class Graph
//{
//	/* �ڽӾ��󣬷��� */
//
//private:
//	//���㼯��
//	vector <V> m_v;//V ֵ
//
//	//�ߵļ���
//	vector<vector<W> > m_edges; //W  Ȩֵ   �� IsDirect  ��ʲôͼ
//public:
//	Graph(const V * v, size_t n)
//	{
//
//		//m_v.resize(n);
//		/* ������ͨ�����ӻ���ɾ��vector�����Ԫ����ʵ�ֵģ���������Ч���ݵĳ��� */
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
//		throw invalid_argument("�Ƿ��Ķ���");
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
//			/* Ӧ�Գɻ������ */
//			if (flag[index]==false)
//			{
//				cout << qu.front() << m_v[index].c_str() << "->";
//			}
//			flag[index] = true;
//
//			qu.pop();
//
//			//���ҵ��������
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
//		//&  ʹ�õݹ��ʱ��Ӧ��ע����ǣ����ݹ����Ҫ�����������б�������ֵ��ʱ��
//		//����Ӧ�ô����ã�����ָ�룬��Ϊ�ֲ������Ļ����ں������ջ��ʱ�򣬻���³�
//		//����ջ�еľֲ�������������Ԥ�ڲ����Ľ��
//
//		cout << i << m_v[i].c_str() << "->";
//		arr[i] = true;
//
//		for (int j = 0; j < m_v.size(); ++j)
//		{
//			if (m_edges[i][j]!=0 && arr[j]==false)
//			{
//			   _DFS(j, arr);//�˴�û��return ��Ϊ����û�з���ֵ����return��������벻���Ĵ���
//			}//forѭ������ֹ������Ϊ�ݹ����ֹ������
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