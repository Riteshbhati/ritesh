import javax.swing.*;
import java.util.*;
class menu
{
     static int arr[]=new int[50];
     static int t=0,count=0;
	public static void main(String args[])
		{
			menu();
		}
static void menu()
{
    boolean check=true;
    while(check)
    {
    System("enter 1 for generating random number \t enter2 for point \t 3 for exit");
    int j=Integer.parseInt(JOptionPane.showInputDialog("enter"));
    if(j==1)
    {
        generate();
    }
    if(j==2)
    {
        points();
    }
    if(j==3)
    {
        check=false;
    }
    }
}
static void generate()
{
    Random random = new Random();
    int count=0,guess=0;
    int randomInt = random.nextInt(0,10);
    Scanner scanner = new Scanner(System.in);
    do{
        int number = 0;
        boolean validInput = false;
        while (!validInput) {
            System.out.print("Enter an integer: ");
            if (scanner.hasNextInt())
             {
                number = scanner.nextInt();
                guess=number;
                validInput = true;
            }
             else {
                System.out.println("Invalid input. Please enter an integer.");
                scanner.next(); 
            }
        }
        if(guess==randomInt)
        {
            count++; 
            pointcal(count);
        }
        if(guess<randomInt)
        {
            System.out.println("guess higher number");
            count++;
        }
        if(guess>randomInt)
        {
            System.out.println("guess lower number");
            count++;
        }
    }while(guess!=randomInt);
}
static void pointcal(int c)
{
    if(count<=10)
    {
    int z=count*10;
    z=z-100;
    z=arr[t];
    t++;
    count=0;
    }
    else{
            System.out.println("no points given as u exceed 10 chance");
            arr[t]=0;
            t++;
     }
}
static void points()
{
    for(int i=0;i<t;i++)
    {
        System.out.println(arr[i]);
    }
}
}