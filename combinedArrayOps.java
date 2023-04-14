import java.util.Scanner;

public class QueueCombinedArrayOperations {
	
	final static int maxSize 10;
	static int[] queue= new int[maxSize];
	static int front;
	static int reer;
	static int counts;
	 front = -1;
	 reer =-1;
	 
	 static Scanner scan = new Scanner(System.in);
	 
	static void enqueue(){
	    int value;
	    if(reer==maxSize-1){
	    	System.out.print("Queue is Overflow\n");
	    }
	    else{
	    	System.out.print("Enter value you want to insert..");
	        value=scan.nextInt();
	        if(front==-1 && reer==-1){
	            front=0;
	            reer=0;
	        }
	        else{
	            reer++;
	        }
	        queue[reer]=value;
	        System.out.print("\nValue inserted Successfully\n");
	        counts++;
	        display();
	    }
	}

	static void dequeue(){
	    int data;
	    if(front==-1){
	    	System.out.print("\nQueue is Underflow\n\n");
	        return;
	    }
	    else{
	        data=queue[front];
	        if(reer==0 && front==0){
	            reer=-1;
	            front=-1;
	        }
	        else{
	            reer--;
	        }
	        for(int i=front;i<reer-1;i++){
	            queue[i]=queue[i+1];
	        }
	        System.out.print("\n%d deleted Successfully\n\n" + data);
	     counts--;
	     display();
	    }

	}

	static void display(){
	    if(front==-1){
	    	System.out.print("\nQueue is Empty\n\n");
	    }
	    else{
	    	System.out.print("\nQueue is now having %d element(s) below: \n"+ counts);
	    for(int i=front;i<=reer;i++) {
	    	System.out.println("%d\t"+queue[i]);
	    }
	    System.out.print("\n\n");
	    }

	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		  int choice;
		    System.out.print("WELCOME TO OUR PROGRAM!\n\n");
		    do{
		    	System.out.print("\nEnter: \n 1.Insert \n 2.Delete \n 3.Display \n 0.Exit\n\n");
		    	System.out.print("Enter your choice..");
		        choice=scan.nextInt();
		    switch(choice){
		    case 1:
		        enqueue();
		        break;
		    case 2:
		        dequeue();
		        break;
		    case 3:
		        display();
		        break;
		    case 0:
		    	System.out.print("\n\nThank you for using our program. Bye!!\n\n");
		        return;
		    default:
		    	System.out.print("\nInvalid choice. Try Again!\n\n");
		    }
		    }
		    while(choice!=0);

	}
}