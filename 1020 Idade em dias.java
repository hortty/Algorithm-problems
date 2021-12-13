/*
Problem: 1020 Idade em dias
*/
import java.util.Scanner;

public class Main{

 public static void main(String args[]){
  Scanner sc=new Scanner(System.in);
  int value=sc.nextInt();
  Age obj=new Age(value);
  obj.getAgeInDays();
  sc.close();
 }
}

class Age{
 private int age;
 private int year;
 private int month;
 private int day;
 Age(int age){
  this.age=age;
  this.year=age/365;
  age=age%365;
  this.month=age/30;
  age=age%30;
  this.day=age;
 }

 public void getAgeInDays(){
  System.out.println(this.year+" ano(s)");
  System.out.println(this.month+" mes(es)");
  System.out.println(this.day+" dia(s)");
 }
}