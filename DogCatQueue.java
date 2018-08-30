public class DogCatQueue{
	public static class Pet{
		private String type;

		public Pet(String type) {
			this.type = type;
		}

		public String getPetType() {
			return this.type;
		}
	}

	public static class Dog extends Pet {
		public Dog(){
			super("dog");
		}
	}

	public static class Cat extends Pet {
		public Cat(){
			super("cat");
		}
	}

	public static class PetEnter {
		private Pet pet;
		private long count;

		public PetEnter(Pet pet, long count) {
			this.pet = pet;
			this.count = count;
		}

		public Pet getPet() {
			return this.pet;
		}

		public long getCount() {
			return this.count;
		}

		public String getEnterPetType(){
			return this.pet.getPetType();
		}
	}
}