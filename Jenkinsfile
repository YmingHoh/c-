pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'g++ -Wall skriva1.cpp -o byr'
        echo 'Compiled'
      }
    }
    stage('Test') {
      steps {
        sh './bir'
      }
    }
    stage('Deliver') {
      steps {
        echo 'Done done done done'
      }
    }
  }
}