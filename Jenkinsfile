pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'g++ -Wall program3.cpp -o bir'
        echo 'Compiled'
      }
    }
    stage('Test') {
      steps {
        sh './bur'
      }
    }
    stage('Deliver') {
      steps {
        echo 'Done'
      }
    }
  }
}