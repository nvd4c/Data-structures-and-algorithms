#include <iostream>
using namespace std;
#include <limits.h>

// số đỉnh
#define V 9

// tìm đỉnh có khoảng cách min, từ tập các đỉnh chưa có trong cây đường đi ngắn nhất
int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void printSolution(int dist[])
{
    cout << "Đỉnh \t Khoảng cách từ điểm gốc" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " \t\t" << dist[i] << endl;
}

void dijkstra(int graph[V][V], int src)
{
    int dist[V]; //dist[i] : khoảng cách ngắn nhất từ src đến i

    bool sptSet[V]; //true nếu đỉnh i được bao gồm trong cây đường đi ngắn nhất hoặc khoảng cách ngắn nhất từ gốc đến i đã có

    // Khởi tạo tất cả các khoảng cách là INFINITE và stpSet[] là false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

 
    dist[src] = 0;

    // Tìm đường đi ngắn nhất cho tất cả các đỉnh
    for (int count = 0; count < V - 1; count++) {
        //Chọn đỉnh có khoảng cách tối thiểu từ tập hợp các đỉnh chưa được xử lý. u luôn bằng src trong lần lặp đầu tiên.
        int u = minDistance(dist, sptSet);

        // Đánh dấu đỉnh đã chọn là đã duyệt
        sptSet[u] = true;

        //Cập nhật giá trị dist của các đỉnh liền kề của đỉnh đã chọn.
        for (int v = 0; v < V; v++)

            //update dist[v] chỉ khi không có trong sptSet, có một cạnh từ u đến v 
            //và tổng trọng số của đường dẫn từ src đến v đến u nhỏ hơn giá trị hiện tại của dist[v]

            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // in mảng khoảng cách đã xây dựng
    printSolution(dist);
}

int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(graph, 0);

    return 0;
}