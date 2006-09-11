class shoe {
  var size:float;
  var color:string;
  def display() {
    writeln('Shoes:  size = ', size, '; color = ', color);
  }
}

class pumps : shoe {
  var heel: float;
  def display() {
    writeln('Pumps:  size = ', size, '; color = ', color, '; heel ht = ', heel);
  }
}

class boots : pumps {
  def display() {
    writeln('Boots:  size = ', size, '; color = ', color, '; heel ht = ', heel);
  }
}

def displayshoe (item:shoe) {
  item.display();
}

var shoe1:shoe = shoe(9.5,"brown");
var shoe2:pumps = shoe(8.0,"navy");
shoe2.heel = 1.0;
var shoe3:boots = pumps(7.0,"white",3.0);
displayshoe(shoe1);
displayshoe(shoe2);
displayshoe(shoe3);

writeln('shoe3.display = ');
shoe3.display();
writeln('heel ht of shoe2 = ',shoe2.heel);
