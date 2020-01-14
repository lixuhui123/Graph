//#include <iostream>
//#include<vector>
//#include <queue>
//using namespace std;
//
//template<class W>
//class Edge
//{
//	size_t _src;
//	size_t _dst;
//	W _w;
//	Edge<W> * _next;
//
//	Edge(const W &w ):
//		_src(0),_dst(0),_w(w),_next(nullptr)
//	{}
//	template<class V, class W, bool IsDirect = false >
//	friend class Graph;
//};
//template<class V, class W, bool IsDirect = false >
//class Graph
//{
//	typedef Edge<W> Edge;//懒
//	vector<V> _vertexs;
//
//	vector<Edge *> _linktable;
//public:
//	Graph(const V * v, size_t n)
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			_vertexs.push_back(v[i]);
//		}
//		_linktable.resize(n, nullptr);
//
//	}
//	size_t GetVertexIndex(const V & v)
//	{
//		for (int i = 0; i < _vertexs.size(); ++i)
//		{
//			if (_vertexs[i] == v)
//			{
//				return i;
//			}
//		}
//		throw invalid_argument("非法的顶点");
//	}
//
//	void _AddEdge(size_t srcindex, size_t dstndex, const W & w)
//	{
//		//Edge<w>* cur=new Edge<w>(srcindex,dstndex,w)
//		Edge* edge = new Edge(w);//< w>?
//		edge->_src = srcindex;
//		edge->_dst = dstndex;
//		 
//		edge->_next = _linktable[srcindex];
//		_linktable[srcindex] = edge;
//	}
//
//	void AddEdge(const V & src, const V & dst,const W & w)
//	{
//		size_t srcindex = GetVertexIndex(src);
//		size_t desindex = GetVertexIndex(dst);
//
//		_AddEdge(srcindex, desindex, w);
//		if ( IsDirect == false)
//		{
//			_AddEdge(desindex, srcindex, w);
//		}
//	}
//
//	 
//};
//int main()
//{
//	string str[] = { "lixuhui","zouzixuan","liruzhen","chengyan" };
//	Graph<string, int> socialGraph(str, sizeof(str) / sizeof(string));
//	socialGraph.AddEdge("liruzhen", "zouzixuan", 100);
//	socialGraph.AddEdge("lixuhui", "zouzixuan", 90);
//	system("pause"); 
//	return 0;
//}