import java.util.Scanner;
public class bellman_ford
{ 
	private int D[]; //create the distance vector
	private int n;//n represents the number of vertices |V|
	public static final int MAX_VALUE = 999;
	public bellman_ford(int n)
	{
		this.n=n;
		D = new int[n+1]; 
	}
	public void shortest(int s,int A[][]) //to compute the shortest path from source node
	{
		for (int i=1;i<=n;i++)
		{ 
			D[i]=MAX_VALUE; //initialize the distance from source to all other nodes as 999 
		} D[s] = 0; //initialize distance to source node as 0
		for(int k=1;k<=n-1;k++)
		{ 
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(A[i][j]!=MAX_VALUE)//check if there exists a path
					{
						if(D[j]>D[i]+A[i][j])  //If dist[v] > dist[u] + weight of edge uv, then update dist[v]
							D[j]=D[i]+A[i][j]; 
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(A[i][j]!=MAX_VALUE)
				{
					if(D[j]>D[i]+A[i][j])//If dist[v] > dist[u] + weight of edge uv, then “Graph contains negative weight cycle”
					{
						System.out.println("The Graph contains negative egde cycle");
						return;
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			System.out.println("Distance of source " + s + " to "+ i + " is " + D[i]);
		}
	}
	public static void main(String[ ] args)
	{
		int n=0,s;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of vertices:");
		n = sc.nextInt();
		int A[][] = new int[n+1][n+1];
		System.out.println("Enter the Weighted matrix:");
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				A[i][j]=sc.nextInt();
				if(i==j)
				{
					A[i][j]=0;
					continue;
				}
				if(A[i][j]==0)
				{
					A[i][j]=MAX_VALUE;
				}
			}
		}
		System.out.println("Enter the source vertex");
		s=sc.nextInt();
		bellman_ford b = new bellman_ford(n);
		b.shortest(s,A);
		sc.close();
	}
}
