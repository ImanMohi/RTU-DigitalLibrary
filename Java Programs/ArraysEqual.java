public class ArraysEqual {
    public static void main(String[] args) {
        int[] dList1={10,50,80,65,100,500};
        int[] dList2={55,80,10,100,250,50};
        isArraysEqual(dList1,dList2);
    }

    private static void isArraysEqual(int[] param1, int[] param2) {
        int x=0,y=0;
        
        if(param1.length==param2.length){
        for (int i = 0; i<param1.length; i++){
            if (param1[i]==param2[i]){
                x++;
            }
        }
        for (int i = 0; i<param1.length; i++){
            if (param1[i]==param2[param1.length-i-1]){
                y++;
            }
        }
        if(x==param1.length || y==param1.length){
            System.out.println("Arrays are Equal");
        }else if(x==0 && y==0){
            System.out.println("Arrays are not Equal");
        }else {
            System.out.println("Arrays are Partially Equal");
        }
        } else {System.out.println("Arrays are not Equal");}
    }
    
}
