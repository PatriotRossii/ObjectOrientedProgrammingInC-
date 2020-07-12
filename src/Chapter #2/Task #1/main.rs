use std::io;
use std::str::FromStr;

fn main() {
	let mut input = String::new();
	if let Err(_) = io::stdin().read_line(&mut input)  {
		panic!("Failed to read a line");
	}
	let gallons = f64::from_str(input.trim());
	let gallons = match gallons {
		Ok(value) => value,
		Err(_) => panic!("Failed to parse gallons")
	};
	println!("Equivalent of {} gallons in cubic feet is {}", gallons, gallons / 7.481f64);

}