public class Soojebi{
  public static void main(String[] args){
    int i = 3;
    int k = 1;
    
    k = i++;
    
    System.out.print(i+k);        
    
    switch(i){
      case 0:
        System.out.print('0');  
      case 1:
        System.out.print('1');  
      case 2:
        System.out.print('2');  
      case '3': 
        k=0;
        System.out.print('3');
        break; 
      case '4': 
        k+=3;
        System.out.print('4');
        break;
      case 5: 
        k-=10;
        System.out.print('5');
        break;
      default:
        k--;
        System.out.print('d');
    }
    System.out.print(k);
  }
}
