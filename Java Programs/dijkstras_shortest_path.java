import java.util.Scanner;
public class Diji {

	    public static void main(String[] args) {
	        Scanner scan = new Scanner(System.in);
	        System.out.println("Enter Number of Vertices");
	        int n = scan.nextInt();

	        int adj[][] = new int[n][n];

	        System.out.println("Enter Adjacency Matrix");
	        for (int i = 0; i < n; i++) {
	            for (int j = 0; j < n; j++) {
	                adj[i][j] = scan.nextInt();
	            }
	        }

	        System.out.println("Enter Source vertex");
	        int src = scan.nextInt();

	        int[] dist = dijkstra(adj, src);

	        for (int i = 0; i < n; i++) {
	            if ((src - 1) == i) {
	                continue;
	            }
	            System.out.println("Shortest Distance from " + src + " to " + (i + 1) + " is " + dist[i]);
	        }
	        scan.close();
	    }

	    static int[] dijkstra(int adj[][], int src) {
	        int n = adj.length;
	        int[] dist = new int[n];
	        boolean[] visited = new boolean[n];
	        int min_dist, unvis = -1;

	        for (int i = 0; i < n; i++) {
	            dist[i] = adj[src - 1][i];
	            visited[i] = false;
	        }

	        visited[src - 1] = true;

	        for (int i = 1; i < n; i++) {
	            min_dist = Integer.MAX_VALUE;
	            for (int j = 0; j < n; j++) {
	                if (!visited[j] && dist[j] < min_dist) {
	                    unvis = j;
	                    min_dist = dist[j];
	                }
	            }

	            visited[unvis] = true;

	            for (int v = 0; v < n; v++) {
	                if (!visited[v] && dist[unvis] + adj[unvis][v] < dist[v]) {
	                    dist[v] = dist[unvis] + adj[unvis][v];
	                }
	            }
	        }
	        return dist;
	    }
}