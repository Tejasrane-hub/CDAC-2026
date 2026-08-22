public class Pattern8
{
	public static void main(String args[])
	{
		for(int i=1; i<=5; i++)
		{
			int num = 1;
			for(int j=1; j<=i; j++)
			{
				System.out.print(num);
				num+=2;
				if(j<i)
				{
					System.out.print("*");
				}
				
			}
			System.out.println();
		}
	}
}