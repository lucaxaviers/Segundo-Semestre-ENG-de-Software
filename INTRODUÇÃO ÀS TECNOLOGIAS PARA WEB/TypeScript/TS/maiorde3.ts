export function maiorDeTres(a: number, b: number, c: number): number {
  if( a > b && a > c){
    return a;
  }
  if( b > a && b > c){
    return b;
  }
  return c;
}
